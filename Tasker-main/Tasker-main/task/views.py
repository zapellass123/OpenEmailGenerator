from django.urls import reverse
from django.http import HttpResponseRedirect
from django.shortcuts import render
from django import forms


class NewTaskForm(forms.Form):
    task = forms.CharField(label="New Task")


tasks_list = []


def index(request):
    return render(request, "task/index.html")


def view(request):
    context = {"tasks": tasks_list}
    return render(request, "task/tasks.html", context)


def add(request):
    if request.method == "POST":
        form = NewTaskForm(request.POST)
        if form.is_valid():
            task = form.cleaned_data["task"]
            tasks_list.append(task)
            return HttpResponseRedirect(reverse("task:view"))

    context = {"form": NewTaskForm()}
    return render(request, "task/add.html", context)
