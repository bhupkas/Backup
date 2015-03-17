#bhupkas

import requests
import json

# Himanshu's post time
AFTER = 1373535091
TOKEN = 'CAACEdEose0cBAKYpL911YZCU2cxrPrfCq4byxZALOauxn6MCRkzfDQkXrhQ7lNgOxrsdb2YKfmxuPOgZBG0rvqyksZBIiyoLYOBe88jnLKcxjipwQ7SJltXJE3v58BblA7umAgYJrDyarjX5prEm6QKTZCnzZAfAkVPLdxtaoKywZDZD'

def get_posts():
    query = ("SELECT post_id, actor_id, message FROM stream WHERE filter_key = 'others' AND source_id = me() AND created_time >= 1373535091 LIMIT 200")
    payload = {'q': query, 'access_token': TOKEN}
    r = requests.get('https://graph.facebook.com/fql', params=payload)
    result = json.loads(r.text)
    return result['data']

def likeall(wallposts):
    for wallpost in wallposts:

        r = requests.get('https://graph.facebook.com/%s' %wallpost['actor_id'])
        url = 'https://graph.facebook.com/%s/likes' % wallpost['post_id']
        user = json.loads(r.text)
        message = 'Thanks %s :)' % user['first_name']
        payload = {'access_token': TOKEN, 'message': message}
        s = requests.post(url)
        print s
        print "Wall post %s done" % wallpost['post_id']

if __name__ == '__main__':
    likeall(get_posts())