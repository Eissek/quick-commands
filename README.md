# quick-commands
A command line application that stores commands (or any data) that needs to be remembered.   

I developed this small app just because I always struggled to remember certain key combinations for emacs and linux commands. Really it can be used to stored any information you want to remember not just commands.

## Download
### Linux
Get latest version [here](https://github.com/Eissek/quick-commands/releases/tag/0.9)  

### Windows
tbc

## Usage?
Its a command line tool so open up your terminal/command-line and cd to where you have extracted the compressed file.   
Run the binary/executable named qc with one of the following options:   

```
-a [COMMAND] [DESCRIPTION] [TAGS] 	- Add a new command/data, tags are optional  

-d [ID] [COMMAND] - Deletes specified command. ID and command are both required.  

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
`$ ./qc -d 1 "C-x b"`  

Update:  
`$ ./qc -u 1 "Description" "Switch Buffer"`    



## Build
#### CHICKEN Installation
To compile and build quick-commands from scratch you will need to use the CHICKEN Scheme to C Compiler.   
#### Linux users
CHICKEN should be available in most package management systems, although it's not always the latest version.   
It already comes as part of Debian and Ubuntu.   
For more details on the Linux availability check [here](http://wiki.call-cc.org/platforms#linux)  

For any other information on the compiler please visit the CHICKEN [website] (http://code.call-cc.org/)  

#### Compilation






