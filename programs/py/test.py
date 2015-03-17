# Thanking everyone who wished me on my birthday
import requests
import json

# Himanshu's post time
AFTER = 1373355210
TOKEN = 'CAACEdEose0cBAEJV91MLycH7KJpeqKLnXKZCZCPUS6hVS1kdLch5pJJtYSjhBgXlPdw1hLSALXppCbXRDZBxAOzg0zFZBlm0xUDNrEbmAp72IgCMdRJUrTjBCmAJSepI0n7dx5W8EiQxXyu9sIicvhuNZBZBysaingopZCRLVvuWAZDZD'

def get_posts():
    """Returns dictionary of id, first names of people who posted on my wall
    between start and end time"""
    query = ("SELECT post_id, actor_id, message FROM stream WHERE filter_key = 'others' AND source_id = me() AND created_time >= 1373355210 LIMIT 200")
    payload = {'q': query, 'access_token': TOKEN}
    r = requests.get('https://graph.facebook.com/fql', params=payload)
    result = json.loads(r.text)
    #print result['data']
    return result['data']
    
def commentall(wallposts):
    """Comments thank you on all posts"""
    #TODO convert to batch request later
    for wallpost in wallposts:

        r = requests.get('https://graph.facebook.com/%s' %wallpost['actor_id'])
        url = 'https://graph.facebook.com/%s/comments' % wallpost['post_id']
        user = json.loads(r.text)
        message = 'Thanks %s :)' % user['first_name']
        payload = {'access_token': TOKEN, 'message': message}
        s = requests.post(url, data=payload)

        print "Wall post %s done" % wallpost['post_id']

if __name__ == '__main__':
    commentall(get_posts())