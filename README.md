# BLINK LANGUAGE

## HOW TO SETUP:
&nbsp;clone the repository:<br/>
&nbsp;```bash
git clone https://github.com/Neiken/Blink_Language.git```

# BLINK INTERPRETED LANGUAGE:
## DOCUMENTATION:
### INSTRUCTIONS:
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

### DESCRIPTION:
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

## HOW TO RUN:
&nbsp;
