# Project: Flight reservation system
Daniel Contreras Chavez

The project will consist of a flight reservation system, which will be stored and listed in a csv file, the user can enter their destination and also filter these flights by price, departure time, or flight duration and organize them in descending or ascending order.
To achieve this we will use:
- Linked lists
- Sorting algorithms: A shell sort will be used.
- Search algorithms

## Description of step 1
In this preview we will define the basis for the project and the algorithms that will be used by writing this Readme.md file and we will start creating a database with flights.

## Instructions to compile the project preview
Run the following command in the terminal:

`g++ main.cpp -o flights`. 

## Instructions to run the project preview
Run the following command in the terminal:

`./flights` 

## Description of the project preview entries

The project requires a csv file entry, where the flights will be stored, and their characteristics (name, duration, price, arrival/departure time), each of these will be separated by commas. The data will be strings, integers (for duration), and floats (for price and arrival/departure time).

## Description of the outputs of the project preview

The outputs will depend on what the user wants to do, once the destination is chosen, the flights that have that destination will be shown, and depending on if the user wants to filter the flights by price, duration, or time, he will get a list with the flights sorted in that way. Once the flight is selected, a text file (ticket) will be generated with the details of the flight selected by the user.
