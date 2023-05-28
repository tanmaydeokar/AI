import nltk
from nltk.chat.util import Chat, reflections
set_pairs = [
    [
        r"hi|hey|hello",
        ["Hello", "Hey there",]
        
    ],
    [  
        r"what is your name?",
        ["My name is Hospital Enquiry Bot.","I'm Hosptital assistant and what is your name",]
       
       
    ], 
    [
        r"my name is (.*)",
        ["Hello %1, How are you doing today ?",]
    ],
    [
       r"What services do you offer?",
       ["We offer a range of medical services. Please specify your enquiry.",]
    ],
    [
        r"(.*) (hour|open|close)",
        ["We are open 24/7. How can we assist you?",]
    ],
    [
        r"(.*) (appointment|schedule|book)",
        ["To book an appointment, please call our reception supreet birajdar at 123-456-789 ",]
    ],
    [
        r"i'm (.*) doing good",
        ["That's great to hear","How can i help you?:)",]
    ],
    [
        r"(.*)(emergency|noraml checking)",
        ["For emergency please call at 911 or go to nearest hospital",]
    ],
    [
        r"(.*)(payment|insurance|cost)",
        ["Please conatct our billing department at 111-111-222-222 for any question related to payment",]
    ],
    [
        r"(.*) thank you so much, that was helpful",
        ["Iam happy to help", "No problem, you're welcome",]
    ],
    [
        r"quit",
    ["Bye, take care. See you soon :) ","It was nice talking to you. See you soon :)",]
],
]
def chatbot():
        print("Hi, I'm the chatbot you built") 

chatbot()
chat = Chat(set_pairs, reflections)
print(chat)
chat.converse()
if __name__ == "__main__":
    chatbot()