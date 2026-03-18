Simple HR Calculation System
📌 About the Project

This project is a Human Resources system developed in C++, responsible for calculating employee salaries according to their job position, managing overtime hours, and organizing different roles within the company.

The project mainly represents the business logic layer (back-end) of the system. Because of this, it can be easily integrated with a database to store employee information and other relevant data.

One recommended option is integrating the system with MySQL, allowing storage of employee records, positions, salaries, and overtime information.

It is also possible to integrate the system with an API, for example using Node.js, where the API acts as an intermediary between the front-end and the C++ system.

Suggested architecture:

Front-end → API → C++ → Database

⚙️ Features

The system currently includes the following features:

Base salary calculation based on job position

Overtime calculation

Job position identification within the system

Separation of calculation logic into specific methods

Structure based on Object-Oriented Programming (OOP)

🧱 Project Structure

The project is organized in a modular way, separating responsibilities between files.

Example structure:

/HRSystem
│
├── main.cpp
├── RHSystem.cpp
├── RHSystem.h
└── README.md

main.cpp → program entry point

RHSystem.cpp → business logic implementation

RHSystem.h → class and method declarations

README.md → project documentation

📊 Example Usage

The system allows the user to calculate salaries and overtime based on the employee's job position.

Example:

Enter the job position code:
Enter the number of overtime hours:

The system will then calculate the overtime payment and display the final salary.

🚧 Roadmap (Future Improvements)

Planned improvements for the project include:

Integration with a MySQL database

API development for front-end communication

Web interface for employee management

Data persistence

Full employee management system

👨‍💻 Technologies Used

C++

Object-Oriented Programming (OOP)

Git

GitHub

Possible future integrations:

Node.js (API)

MySQL (Database)

✍️ Author

Victor Hugo
