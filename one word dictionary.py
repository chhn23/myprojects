# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
import requests
from bs4 import BeautifulSoup
word=input("enter word:")
data =requests.get("https://www.collinsdictionary.com/dictionary/english-hindi/"+word)
soup=BeautifulSoup(data.text,"html.parser")
soup.prettify()
d=soup.find('span',{'class':'quote newline'})
print(d.contents[0])








