# 3004_Final_Project

Team 4

Teaching Assistant: Esra Ersan (ESRAERSAN@cmail.carleton.ca)

Members: Joris Kabore (JorisKabore@cmail.carleton.ca), Majd Taweel (majdtaweel@cmail.carleton.ca) Jean-Pierre Aupont (jeanpierreaupont@cmail.carleton.ca)

Who did what in the project: 
   Documentation:
      All 3 members grabbed three features/additional features (Power,Battery Level, Selecting a session...) and made the use case, sequence diagram, and traceability matrix.
      Second round of updating use cases to better match our program - Majd
      Normal Sequence Diagram - Majd
      Test Cases - Split amongst us three
      
   Programming:
      Power (Turn On/off, Ending a session) - JP
      Placement of Electrodes/Connection Test (Handled by the onEars QCheckBox) - Joris
      Battery Level (displaying battery level on device) - JP
      Battery Level (decreasing the battery life, and increasing it to full) - Joris
      Selecting a Session (Using the next button and the CheckBoxes to select a session + 
                           Using the next button and the CheckBoxes to select amount of time +
                           Using the next button and the CheckBoxes to select a user) - Joris
      Selecting a Session (Selecting a custom time for a therapy) - Majd
      
      

File organization of the deliverables:
    Header files:
        battery.h
        session.h
        record.h
        mainwindow.h
    Source files:
        battery.cpp
        session.cpp
        record.cpp
        mainwindow.cpp
        main.cpp
    UI file:
        mainwindow.ui

Tested scenarios: ones that work and ones that don’t:
    Power on the machine
    Power off the machine
    Starting a session
    Battery level is being displayed and depleted as the device is powered on and sessions run
   
