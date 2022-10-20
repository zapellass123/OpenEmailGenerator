from django.urls import path
from . import views

app_name = "task"

urlpatterns = [
    path("", views.index, name="index"),
    path("tasks/", views.view, name="view"),
    path("add/", views.add, name="add"),
]
