# Blink Language

## How to setup:
&nbsp;First clone the repository:<br/>
&nbsp;```git clone https://github.com/Neiken/Blink_Language.git``` <br/>
&nbsp;Enter in cloned repository <br/>
&nbsp;```cd  Blink_Language``` <br/>
&nbsp;Compile the files <br/>
&nbsp;```make``` <br/>
&nbsp;Now.you can compile your .bl files and run your .blo files <br/>

## How to Use:
&nbsp;To just compile .bl files, you can run:<br/>
&nbsp;```blc <your_file.extension> -o <compiled_file.extension>``` <br/>
&nbsp;The output file will be in .blo syntax <br/>
&nbsp;You don't need to use ```-o``` flag, if it isn't used, it will create a file ```<your_file>.blo``` <br/>
&nbsp;To run your compiled file, you can use: <br/>
&nbsp;```bloi <your_compiled_file.extension>``` <br/>
&nbsp;But you can compile and run your file just adding the flag ```-i```: <br/>
&nbsp;```blc <your_file.extension> -o <compiled_file.extension> -i``` <br/>

## Blink Object Language:
### Documentation:
#### Instructions:
&nbsp;CREATE <name>          <type>              <br/>
&nbsp;USE    <name>                              <br/>
&nbsp;SET    <value>                             <br/>
&nbsp;PUSH   <pointer_stack>                     <br/>
&nbsp;PUSH   <value_stack>   <value>             <br/>
&nbsp;POP    <pointer_stack>                     <br/>
&nbsp;POP    <value_stack>                       <br/>
&nbsp;ADDV   <pointer_stack>                     <br/>
&nbsp;ADDV   <value_atack>                       <br/>
&nbsp;PRINT                                      <br/>
&nbsp;PRINT  <pointer_stack>                     <br/>
&nbsp;PRINT  <value_stack>                       <br/>

#### Description:
&nbsp;CREATE = Creates a pointer with <name> of type <type>                                                                      <br/>
&nbsp;USE    = Uses a pointer with <name>                                                                                        <br/>
&nbsp;SET    = Defines the value of currently using pointer as <value>                                                           <br/>
&nbsp;PUSH   = Adds the currently using pointer as last in stack <pointer_stack>                                                 <br/>
&nbsp;PUSH   = Adda the value <value> as last in stack <value_stack>                                                             <br/>
&nbsp;POP    = Removes the last pointer in stack <pointer_stack>                                                                 <br/>
&nbsp;POP    = Removes the last value in stack <value_stack>                                                                     <br/>
&nbsp;ADDV   = Sums the last two pointers values in stack <pointer_stack> and sets the value as value of currently using pointer <br/>
&nbsp;ADDV   = Sums the last two values in stack <value_stack> and sets the value ae value of currently using pointer            <br/>
&nbsp;PRINT  = Prints the value of currently using pointer                                                                       <br/>
&nbsp;PRINT  = Prints the value of last pointer in stack <pointer_stack>                                                         <br/>
&nbsp;PRINT  = Prints the last value in stack <value_stack>                                                                      <br/>
