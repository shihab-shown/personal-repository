import requests
from bs4 import BeautifulSoup
from plyer import notification
import vlc
import time
import os

def search_and_check_seat_availability(url, search_query):

    response = requests.get(url)
    #with open("showofferedcourses.html") as fp:
    soup = BeautifulSoup(response.text, 'html.parser')

    table = soup.find('table', class_='oferedtable table table-bordered table-striped table-hover')
    rows = table.find_all('tr')

    course_sections = []

    for row in rows[1:]: 
        cells = row.find_all('td')
        if len(cells) >= 7 and cells[1].text.strip() == search_query:
            course_sections.append({
                'course_name': cells[1].text.strip(),
                'section': cells[2].text.strip(),
                'seats_available': cells[6].text.strip()
            })

    return course_sections

def cse_CourseFinder(search_query, search_query1):
    base_url = 'https://rds2.northsouth.edu/index.php/common/showofferedcourses'
    theory = search_and_check_seat_availability(base_url, search_query)
    lab = search_and_check_seat_availability(base_url, search_query1)

    for theory_section in theory:
        available_seats = theory_section['seats_available']
        section_number = theory_section['section']

        if available_seats is not None  and int(available_seats) >= 1:
            for lab_section in lab:
                if lab_section['section'] == section_number:
                    lab_available_seats = lab_section['seats_available']
                    if lab_available_seats is not None and int(lab_available_seats) >= 1:
                        print(f'{search_query} Section {section_number} has seats available Theory: {available_seats} Lab: {lab_available_seats}')
                        notification.notify(
                            title='Seats Available',
                            message=f'{search_query} Section {section_number} has seats available Theory: {available_seats} Lab: {lab_available_seats}',
                            timeout=3
                            )
                        for i in range(20):
                            p = vlc.MediaPlayer("file:///A:/Code/beep.mp3")
                            p.play()
                            time.sleep(2)                              


def main():
    count = 0
    while True:
        cse_CourseFinder('CSE332/EEE336', 'CSE332L/EEE336L')
        cse_CourseFinder('CSE311/ETE335', 'CSE311L/ETE335L')
        count += 1
        print(f'Checked {count} times')
        time.sleep(30)
        os.system('cls')

if __name__ == '__main__':
    main()
