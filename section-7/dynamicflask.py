from flask import Flask
from datetime import datetime
from pytz import timezone

app = Flask(__name__)

@app.route("/")
def time():
  now = datetime.now(timezone('America/New_York'))
  return "The current date and time is %s" % now
