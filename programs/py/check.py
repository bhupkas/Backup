import requests
import json
import urllib

query = "SELECT post_id, actor_id,created_time, message FROM stream WHERE filter_key = 'others' AND source_id = me() AND created_time >= 1373535091 LIMIT 200"
params = urllib.urlencode({'q': query, 'access_token': 'CAACEdEose0cBANFLF87y8AkZCTFcm9rx1VDkXsf7HrGZBUOJ6hyP9qzNtbRBHqZCIviZAPFefkpptd0drmYcXZALoDZCI95XzTabHmd23avsqvDGWKk8yUyZBZB0RguZCkpddpZA7F3bScS4bSoiykwcMWJZAOlImbTHu1qnKIEoU5UWQZDZD'})
print params

url = "https://graph.facebook.com/fql?" + params
print url
data = urllib.urlopen(url).read()
print(data)