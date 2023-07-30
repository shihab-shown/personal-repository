import os
import time
import psutil
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler

def log_entry(file_name):
    episode_title = os.path.basename(file_name)
    current_time = time.strftime('%Y-%m-%d %H:%M:%S')
    log_file_path = r"C:\Custom Scripts\watched_videos.log"
    with open(log_file_path, "a") as log_file:
        log_file.write(f"{current_time} - {episode_title}\n")

class VLCFileHandler(FileSystemEventHandler):
    def on_modified(self, event):
        if event.src_path.endswith(".mkv") or event.src_path.endswith(".mp4"):
            process_names = [proc.name().lower() for proc in psutil.process_iter(['name'])]
            if "vlc.exe" in process_names or "vlc" in process_names:
                log_entry(event.src_path)

if __name__ == "__main__":
    event_handler = VLCFileHandler()
    observer = Observer()
    observer.schedule(event_handler, path="C:\\", recursive=True)
    observer.start()

    try:
        while True:
            time.sleep(1)
    except KeyboardInterrupt:
        observer.stop()
    observer.join()
