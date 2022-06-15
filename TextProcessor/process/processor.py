#import string
import torch
import re
def remove_punc(text):
    text = re.sub(r'[\W^\s]' ,' ',text)
    print(text)
    return text


def sen_len( text,length ):
    text = text.split(' ')
    for i in range(len(text)):
        if (i+1)%length == 0:
            text.insert(i,'\n')
    text = ' '.join(text)

    return text

def remove_line(text):
    text = re.sub(r'[\s]' ,' ',text)
    return text
