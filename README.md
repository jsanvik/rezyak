CPSC2720 Two Week Project - Rezyak

- Last Updated: 2024.10.10 by Ifty Shafi Ismam, John S. Anvik, Ryan Luu
Design Contribution Notes:
- When creating design, all three group members met together to plan the design and all contributed equally.
- Each one input and critiqued ideas, and two final designs were decided on.
- Once rough drafts of these designs were finalized, using draw.io Ryan and John created the UML diagram for design A and Ifty created the diagram for design B.
- After all group members were happy with both designs, they were submitted to moodle.
Implementation contribution notes:
- At the beginning, class implementation was divided as follows:
- Ifty - Implement Game and Rezyak Classes
- Ryan - Implement Player class, work on style & pipeline stuff
- John - Implement Randomizer & Spinner classes, work on style & pipeline stuff.
- Those who finished their portion early would help with other tasks as they arose.
- All of us followed through with the implementation the above listed classes, but as time went on, we also each made changes to "each others" classes when needed.
- Ifty created a UI class, later the group collectively decided to replace it with a UI in main that was implemented by Ryan and John
- Unit tests were written by Ryan and John.
- Final UML diagram was adapted from our original design by John
Notes:

The Makefile and .gitlab-ci.yml files are provided.
The .gitlab-ci.yml file uses the targets in the Makefile.
These are the tools/commands/apps used:

Compiler: g++
Style Check: cpplint
Static Check: cppcheck
Memory Check: valgrind


Use make version to see the versions of the tools.

Certain assumptions have been made:

One repo contains the files for one project.
All header files for the project are found in include/ and named *.hpp, every class must have a header file.
All project source files for the project are named *.cpp.

Any needed source files that correspond to header files are found in src/.
There is a main.cpp found in src/project/.
