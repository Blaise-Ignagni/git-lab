"Answer 1 git version 2.36.1.windows.1" 

"Answer 2 
diff.astextplain.textconv=astextplain
filter.lfs.clean=git-lfs clean -- %f
filter.lfs.smudge=git-lfs smudge -- %f
filter.lfs.process=git-lfs filter-process
filter.lfs.required=true
http.sslbackend=openssl
http.sslcainfo=C:/Users/Blaise/Desktop/Ohio univerity/Summer 2022/CS_2400/git-lab/Git/mingw64/ssl/certs/ca-bundle.crt
core.autocrlf=true
core.fscache=true
core.symlinks=false
pull.rebase=false
credential.helper=manager-core
credential.https://dev.azure.com.usehttppath=true
init.defaultbranch=master
user.name=Blaise-Ignagni
user.email=bi032320@Ohio.edu
" 

"Answer 3 
usage: git [--version] [--help] [-C <path>] [-c <name>=<value>]
           [--exec-path[=<path>]] [--html-path] [--man-path] [--info-path]
           [-p | --paginate | -P | --no-pager] [--no-replace-objects] [--bare]
           [--git-dir=<path>] [--work-tree=<path>] [--namespace=<name>]
           [--super-prefix=<path>] [--config-env=<name>=<envvar>]
           <command> [<args>]

These are common Git commands used in various situations:

start a working area (see also: git help tutorial)
   clone     Clone a repository into a new directory
   init      Create an empty Git repository or reinitialize an existing one

work on the current change (see also: git help everyday)
   add       Add file contents to the index
   mv        Move or rename a file, a directory, or a symlink
   restore   Restore working tree files
   rm        Remove files from the working tree and from the index

examine the history and state (see also: git help revisions)
   bisect    Use binary search to find the commit that introduced a bug
   diff      Show changes between commits, commit and working tree, etc
   grep      Print lines matching a pattern
   log       Show commit logs
   show      Show various types of objects
   status    Show the working tree status

grow, mark and tweak your common history
   branch    List, create, or delete branches
   commit    Record changes to the repository
   merge     Join two or more development histories together
   rebase    Reapply commits on top of another base tip
   reset     Reset current HEAD to the specified state
   switch    Switch branches
   tag       Create, list, delete or verify a tag object signed with GPG

collaborate (see also: git help workflows)
   fetch     Download objects and refs from another repository
   pull      Fetch from and integrate with another repository or a local branch
   push      Update remote refs along with associated objects

'git help -a' and 'git help -g' list available subcommands and some
concept guides. See 'git help <command>' or 'git help <concept>'
to read about a specific subcommand or concept.
See 'git help git' for an overview of the system.

" 

"Answer 4
On branch master

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        LICENSE.txt
        README.md
        ReleaseNotes.html
        answers.md
        bin/
        cmd/
        dev/
        etc/
        git-bash.exe
        git-cmd.exe
        mingw64/
        unins000.dat
        unins000.exe
        unins000.msg
        usr/

nothing added to commit but untracked files present (use "git add" to track)

" 

"Answer 5
On branch master

No commits yet

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)
        new file:   README.md

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        LICENSE.txt
        ReleaseNotes.html
        answers.md
        bin/
        cmd/
        dev/
        etc/
        git-bash.exe
        git-cmd.exe
        mingw64/
        unins000.dat
        unins000.exe
        unins000.msg
        usr/
" 

"Answer 6
On branch master

No commits yet

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)
        new file:   README.md
        new file:   answers.md

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        LICENSE.txt
        ReleaseNotes.html
        bin/
        cmd/
        dev/
        etc/
        git-bash.exe
        git-cmd.exe
        mingw64/
        unins000.dat
        unins000.exe
        unins000.msg
        usr/

" 

"Answer 7 
$ git status
On branch master
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   README.md
        modified:   answers.md

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        LICENSE.txt
        ReleaseNotes.html
        bin/
        cmd/
        dev/
        etc/
        git-bash.exe
        git-cmd.exe
        mingw64/
        unins000.dat
        unins000.exe
        unins000.msg
        usr/

no changes added to commit (use "git add" and/or "git commit -a")

" 

"Answer 8
$ git log
commit 4725e40576006383c9c2a1689cf8179ed6681cb5 (HEAD -> master)
Author: Blaise-Ignagni <bi032320@Ohio.edu>
Date:   Fri May 13 22:10:31 2022 -0400

    Initial commit

" 

"Answer 9
On branch main
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   README.md
        modified:   answers.md

no changes added to commit (use "git add" and/or "git commit -a")
" 

"Answer 10
not reflected" 

"Answer 11
not reflcted"
 
"Answer 12
reflected" 

"Answer 13 
 Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
-a----         5/14/2022   8:55 PM            302 .gitignore
-a----         5/14/2022   8:55 PM             11 README.md
" 
