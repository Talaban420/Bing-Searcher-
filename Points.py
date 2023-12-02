import webbrowser
import pyautogui
import time


webbrowser.open('http://bing.com')

# List of 50 random words
word_list = ["Zeus", "Athena", "Apollo",  # Ancient Greek mythology
    "Jupiter", "Mars", "Venus",  # Roman mythology
    "Odin", "Thor", "Frigg",  # Norse mythology
    "Brahma", "Vishnu", "Shiva",  # Hinduism
    "Allah", "Jibreel", "Iblis",  # Islam
    "Yahweh", "Jesus", "Holy Spirit",  # Christianity
    "Buddha", "Avalokiteshvara", "Maitreya",  # Buddhism
    "Amaterasu", "Susanoo", "Izanagi",  # Shinto
    "Ra", "Isis", "Osiris",  # Ancient Egyptian mythology
    "Ahura Mazda", "Anahita", "Mithra",  # Zoroastrianism
    "Krishna", "Rama", "Lakshmi",  # Hinduism
    "Huitzilopochtli", "Quetzalcoatl", "Tlaloc",  # Aztec mythology
]  



def press_Message(word):
    # Add a short delay before typing each word
    time.sleep(0.5)
    pyautogui.typewrite(word)

def press_Enter():
    pyautogui.press('enter')
    time.sleep(1.0)
    pyautogui.press('.')
    time.sleep(1.0)
    pyautogui.press('backspace')

# Initial delay before typing the message
time.sleep(3)

# Send 50 messages with words in order
for word in word_list:
    press_Message(word)
    press_Enter()
    time.sleep(2.)
   
    
    # Add a delay between each message (you can adjust the duration as needed)
    #time.sleep(2)
