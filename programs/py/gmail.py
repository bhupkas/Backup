
#!/usr/bin/python

import smtplib
from email.MIMEMultipart import MIMEMultipart
from email.MIMEBase import MIMEBase
from email.MIMEText import MIMEText
from email import Encoders
import os

gmail_user = "bkjblpur@gmail.com"
gmail_pwd = "bhupendra26041994"

def mail(to, subject, text, attach):
   msg = MIMEMultipart()

   msg['From'] = "Bhupendra Kastore"
   msg['To'] = "bhupkas"
   msg['Subject'] = "Test"

   msg.attach(MIMEText(text))

   part = MIMEBase('application', 'octet-stream')
   part.set_payload(open(attach, 'rb').read())
   Encoders.encode_base64(part)
   part.add_header('Content-Disposition',
           'attachment; filename="%s"' % os.path.basename(attach))
   msg.attach(part)


   print "here"
   mailServer = smtplib.SMTP("smtp.gmail.com", 465)
   
   mailServer.ehlo()
   
   mailServer.starttls()
   mailServer.ehlo()
   
   mailServer.login(gmail_user, gmail_pwd)
   mailServer.sendmail(gmail_user, to, msg.as_string())
   # Should be mailServer.quit(), but that crashes...

   mailServer.close()

mail("bhupkas@iitk.ac.in",
   "Hello from python!",
   "This is a email sent with python",
   "my_picture.jpg")