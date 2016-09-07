# quick-commands
A command line application that stores commands (or any data) that needs to be remembered.   

I developed this small app just because I always struggled to remember certain key combinations for emacs and linux commands. Really it can be used to stored any information you want to remember not just commands.

## Screenshots
![Image of qcommands table 1](https://github.com/Eissek/quick-commands/screenshots/qcommands-table.png)

![Image of qcommands table 2](https://github.com/Eissek/quick-commands/screenshots/qc-table2.png)


## Binaries
### Linux
####x86-64
Get latest version [here](https://github.com/Eissek/quick-commands/releases)  

### Windows
tbc

## Installation    
Enter the following command in the qc_release directory   
`$ make install`   

The qc executable should now have been copied to `~/bin/qc` directory, ready for usage.   



## Usage?
Its a command line tool so open up your terminal/command-line and cd to where you have extracted the compressed file.   
Run the binary/executable named qc with one of the following options:   

```
-a [COMMAND] [DESCRIPTION] [TAGS] 	- Add a new command/data, tags are optional  

-d [ID] - Deletes specified command using its ROW ID.  

-f [TAG] - Filters commands list based on speicifed TAG  

-h - Lists all the available options.  

-l - Lists all the stored commands/data with its ID.  

-s [COMMAND] - Search for a particular command   

-u [ID] [COLUMN] [DATA]- Update specified command. COLUMN can either be Command, Description or Tags  
 ```

####Examples of usage   

Add new command  
`$ ./qc -a "C-x b" "Changes Buffer" "Emacs"`   

Delete:   
`$ ./qc -d 1`  

Update:  
`$ ./qc -u 1 "Description" "Switch Buffer"`    



## Build  
### Easy
#### Build using Make
After downloading the code or cloning the repository. Use make to build 
the executable by running the following command:  
`Make all`   

This should
* download Chicken  
* install the needed eggs (extentions)  
* compiles the scm files  
* install quick-commands in $HOME/bin/qc directory  

Now run the qc executable from the $HOME/bin/qc directory.
`cd ~/bin/qc/` to cd to the qc folder.  
Use the following to add a command, replace the placeholders your own data:  
'./qc -a "COMMAND HERE" "DESCRIPTION HERE" "TAGS"` 


### Advance   
#### CHICKEN Installation
To compile and build quick-commands from scratch you will need to use the CHICKEN Scheme to C Compiler.   
##### Linux users   
CHICKEN should be available in most package management systems, although it's not always the latest version.   
It already comes as part of Debian and Ubuntu.   
For more details on the Linux availability check [here](http://wiki.call-cc.org/platforms#linux)   

For any other information on the compiler please visit the CHICKEN [website] (http://code.call-cc.org/)  

#### Install needed eggs  
Once chicken is installed run the following to add the needed extentions:
`chicken-install sqlite3 posix args srfi-13`  

#### Compile source
Create object code:  
`csc -c cli.scm main.scm`  

Portable executable:  
`csc -deploy cli.o main.o -o qc`  

(Optional) Install extentions inside qc folder:  
`chicken-install -deploy -p qc sqlite3 posix args srfi-13`  

Copy the database to $HOME directory:   
`cp -a resources/qcommands.db $HOME`   
The $HOME directory is where quick commands will look for the database.   






