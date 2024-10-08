### Step 1: Open terminal in vscode
### Step 2:
```
gh auth login
```
clone Repository from internet  
```
git clone [HTTPS URL]
```
verify remote repository  
```
git remote -v
```
Do some work  
stage your chnages  
```
git add .
```
Commit Change
```
git commit -m "updating master"
```
Push Changes to remote repository
```
git push origin master
```

pull changes made by others
```
git pull origin main
```
Learn More about Stage, Commoit, Push Pull, https://www.nobledesktop.com/learn/git/stage-commit-files

under development










# Lab Experiments: Commonly Used Commands
```
git init AdityaGit
```
create one.c two.c  
```
git add .
git commit -m "type something"
```

```
git branch -b NewBranch
```
```
create three.c four.c  
git add .
git commit -m "type something"
```

```
git checkout master
git merge NewBranch
```

# use below commands any time to see the status of your work
```
git status
git log
git branch
```

# clone a remote repository from github
git clone [Copy/paste HTTPS link]


#pull changes that are happened when you are in vacation
git merge -s theirs branch-name
# in our example it is RajeshPesitm-master
