# bhupkas

import requests
import json

TOKEN = 'CAACEdEose0cBABjk5muW2aCNt45OFssRVKsaUsCgsBMIfVQJDXirmGRlGWR3OZCgw1H2t9YOYhmDWEYTq6ws7FzhKZCSNPNscqVuSryaeMlf5HNAjWGfOy55cJ2PMIiJMmwJiM4oZBj6v21hFLVu8IsDGcgdO23eqRsZCT6j5gZDZD'


def status_update():
    url = 'https://graph.facebook.com/100002541392079/feed'
    message=['Kewlstatus','kEwlstatus','keWlstatus','kewLstatus','kewlStatus','kewlsTatus','kewlstAtus','kewlstaTus','kewlstatUs','kewlstatuS']
    for i in range(1):
        temp=message[i]
        payload = {'access_token': TOKEN, 'message': temp}
        print temp
        s = requests.post(url, data=payload)

if __name__ == '__main__':
    status_update()