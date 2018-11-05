from flask import Flask

app = Flask(__name__)

@app.route("/")
def index():
    return "You are at the index!"

# Add section app route with HTML

@app.route("/section")
def section():
    return ("<p>You are in section</p>")
