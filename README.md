# djangoApi

# Django + SQLite

Install VS Code, Node js, python

create a virtual environment for installing Django

command : > python -m venv <name_of_virtual_env>

activate the virtual environment and intall requried modules only in virtual environment

command : > <name_of_virtual_env>\Scripts\activate

Now install Django in virtual environment

command : > pip install django

To create Api endpoint we also need to install django rest framework

command : > pip install djangorestframework

To create a new django project

command : > django-admin startproject <name_of_the_project>

To see the output in the browser navigate to project folder and type

command : > python mangage.py runserver

Important Files in Django:

1. manage.py : Its a command line utility that helps in interacting with django project

2. db.sqlite3 : Its a database file which is used to store the data

3. _init_.py : Its an empty file that tells python that this directory should be considered a python project or python modules

4. settings.py : It consists of all the setttings and configuration needed for this django project
 
5. urls.py : It consists of all url declarations needed for this project
 
6. asgi.py : Its an entry point for asgi compatible webservers
 
7. wsgi.py : Its and entry point for wsgi compatible webservers



Download SQlite from SQLiteStudio

In order to launch the application just go to the downloaded folder and double click on SQLiteStudio Application (It opens sqlite interface)

Click on database ->  Add a Database then import the sqlite file present in the django project.

Install django-cors-headers package.

command : > pip install django-cors-headers

update corsheaders in settings.py file 


Create your first app in the django project

command : > python mangage.py startapp <app_name>

Register your app in settings.py file and also add 'rest_framework'(for api methods)


Create your requred models in models.py file


After writing the models run the following command to create tables in database file

command : > python manage.py makemigrations <app_name>

to commit changes in database file run

command : > python manage.py migrate EmployeeApp


Now Create Serializers for the models.

Serializers helps us in converting our complex types  or model instances to native python data types that can be rendered easily into json/xml or other content type

It also helps in deserialization that is converting parsed data types back to complex types


To create Serializers:

add a file with name serializers.py in app folder (not in project folder)

create separate serializer classes for different models


Now write api methods in views.py file and map that methods to urls.py file (we have to create urls.py file explicitly in app folder)

And also define the app's urls in project url folder



# Django + React 

1. Create react app in different folder (other than django)


2. create .evn file and add below lines


    REACT_APP_API = http://127.0.0.1:8000/  /// (for localhost for production replace this)
    
    REACT_APP_PHOTOPATH = http://127.0.0.1:8000/media/  /// (for handling media such as photos)
    
3. add .env file into .gitignore file


4. GET Method : To fetch the data from api use the below code in useEffect hook

    fetch(process.env.REACT_APP_API+'department').then(response=>response.json()).then(In this update setState variable) 
    // here department refers to one of the endpoint of api
    
5. Once the setState variable is updated the data can be easily accessed from react components.

