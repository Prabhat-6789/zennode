# Task 1 - Catalogue Pricing and Discount Calculator

This program calculates the total price for a set of products based on a given catalogue and applies discounts based on certain rules. The program also considers gift wrap fees and shipping fees. The discounts are applied based on specific rules, and the program selects the most beneficial one for the customer.

## Supported Products

- Product A: $20
- Product B: $40
- Product C: $50

## Discount Rules

1. **flat_10_discount**: Apply a flat $10 discount on the cart total if it exceeds $200.
2. **bulk_5_discount**: Apply a 5% discount on the total price of any single product if its quantity exceeds 10 units.
3. **bulk_10_discount**: Apply a 10% discount on the cart total if the total quantity of all products exceeds 20 units.
4. **tiered_50_discount**: If the total quantity exceeds 30 units and the quantity of any single product is greater than 15, apply a 50% discount on the excess units above 15.

## Fees

- Gift wrap fee: $1 per unit.
- Shipping fee: 10 units can be packed in one package, and the shipping fee for each package is $5.

## Usage

### C++

1. Ensure you have a C++ compiler installed on your system (e.g., g++).
2. Clone the repository.
3. Navigate to the zennode directory.
4. compile the Program.
5. Run the Program.
6. Follow the on-screen prompts to enter the quantity and gift wrap information for each product.

### Javascript
1. Ensure you have Node.js installed on your system.
2. Navigate to the Zennode directory.
3. install `readline-sync` library through `npm`. This is because we could not use `prompt` on Node.js. So, for taking input we will have to install it.
4. Run the program.
5. Follow the on-screen prompts to enter the quantity and gift wrap information for each product.

##Notes
- The program selects the most beneficial discount if multiple discounts are applicable.


# Task 2 - Thought Sharing

### Q. Why do you like to join as a Software developer?
Ans - 
I am eager to join as a software developer because I possess strong skills in web development (HTML, CSS, JavaScript) and have hands-on experience with version control using Git. With proficiency in MERN stack and a knack for problem-solving, I am well-equipped to contribute effectively to the team's goals.

### Q. List top 3 softwares / tools that inspire you. Why do these tools inspire you?
Ans - 
**Visual Studio Code (VSCode)**: Its powerful features and extensibility make coding efficient and enjoyable, enhancing my productivity as a developer.

**Git**: As a version control system, Git enables collaborative development and provides a structured way to manage code changes, fostering teamwork and code integrity.

**MongoDB Atlas**: MongoDB's cloud database service simplifies data management, allowing me to focus on building robust MERN stack applications without worrying about infrastructure complexities.

### Q. List top 3 organisations you like to join in your career & why you like these organisations.
Ans - 
1. **Google**:

  - Known for its innovative work culture, cutting-edge projects, and a commitment to employee well-being.
  - Opportunities for impactful contributions to various fields, including artificial intelligence, cloud computing, and software development.
2. **Microsoft**:

  - Offers a diverse range of technologies and services, providing a platform for career growth and skill development.
  - Emphasis on inclusivity, social responsibility, and a global impact through initiatives like Microsoft Philanthropies.

3. **Tesla**:

  - Pioneering advancements in electric vehicles, renewable energy, and sustainable technologies.
  - Attracts talent interested in contributing to the future of clean energy and transportation.

### Q. How you position yourself in this industry after 2 years.
Ans - 
In two years, I aim to be a seasoned MERN stack developer known for delivering robust and scalable applications. Leveraging continuous learning, I aspire to take on leadership roles, contribute to innovative projects, and remain at the forefront of emerging technologies within the web development landscape.

### Q. List 3 projects / products you have built or have planned to build in the upcoming year, also explain your role in the same.
Ans - 
1. **Organic Store Project**

  - Developed an organic store application using the MERN stack.
  - Integrated React's Context API for centralized state management, enhancing scalability.
  - Implemented a robust pagination system for efficient navigation through a large product catalog.
  - Utilized React Router for smooth page transitions, contributing to an intuitive user experience.

2. **MERN Stack Project**:

  - Created a MERN stack project with CRUD operations (Create, Read, Update, Delete).
  - Utilized MongoDB as the database and implemented user authentication using JWT for enhanced security.
  - Employed Bcrypt for password hashing to ensure data protection.

3. **Quizzer App Project**:

  - Developed a MCQ quiz website with questions fetched from a publicly available API.
  - Created an interactive and engaging platform for users to participate in quizzes.
  - Leveraged API data to dynamically generate quizzes, providing a diverse range of questions for users.
