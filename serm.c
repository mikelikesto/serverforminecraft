#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char command[50];

   strcpy( command, "/home/mike/minecraft/server/java/jdk-17.0.2/bin/java -Xmx6024M -Xms6024M -jar /home/mike/minecraft/server/spigot-1.18.2.jar nogui" );
   system(command);

   return(0);
} 
