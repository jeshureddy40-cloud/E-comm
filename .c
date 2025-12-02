
body {
    border: 0;
    font-family: 'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif;
    background: linear-gradient(135deg, #f4f4f9, #ffeaa7); /* Soft pastel gradient */
}

/* Header */
header {
    color: #ffffff;
    background: linear-gradient(90deg, #6c5ce7, #00cec9); /* Purple to teal */
    padding: 15px 20px;
    display: flex;
    justify-content: space-between;
    align-items: center;
    box-shadow: 0 4px 10px rgba(0,0,0,0.2);
}

/* Navigation Links */
nav a {
    color: #ffeaa7; /* Soft yellow for links */
    margin: 15px 20px;
    text-decoration: none;
    font-size: 20px;
    font-weight: bold;
    transition: color 0.3s ease;
}
nav a:hover {
    color: #fab1a0; /* Peach hover */
}

/* Main Section */
.main {
    background: linear-gradient(135deg, #ffffff, #dfe6e9); /* White to light gray */
    color: #2d3436;
    padding: 50px;
    text-align: center;
    border-radius: 10px;
    box-shadow: 0 4px 15px rgba(0,0,0,0.1);
}

/* Buttons - Multiple Colors */
.btn {
    display: inline-block;
    color: #ffffff;
    border-radius: 8px;
    text-decoration: none;
    padding: 12px 18px;
    font-size: 18px;
    margin: 15px;
    font-weight: bold;
    transition: all 0.3s ease;
    box-shadow: 0 4px 10px rgba(0,0,0,0.2);
}

/* Button Variants */
.btn-purple {
    background: linear-gradient(45deg, #6c5ce7, #a29bfe);
}
.btn-purple:hover {
    transform: scale(1.05);
    background: linear-gradient(45deg, #a29bfe, #6c5ce7);
}

.btn-orange {
    background: linear-gradient(45deg, #fd79a8, #fab1a0);
}
.btn-orange:hover {
    transform: scale(1.05);
    background: linear-gradient(45deg, #fab1a0, #fd79a8);
}

.btn-green {
    background: linear-gradient(45deg, #00b894, #55efc4);
}
.btn-green:hover {
    transform: scale(1.05);
    background: linear-gradient(45deg, #55efc4, #00b894);
}

.btn-neon {
    background: linear-gradient(45deg, #ff00cc, #333399);
}
.btn-neon:hover {
    filter: brightness(1.2);
}

/* Footer */
footer {
    background: linear-gradient(90deg, #00cec9, #6c5ce7);
    color: #ffffff;
    text-align: center;
    padding: 15px 20px;
    position: fixed;
    width: 100%;
    bottom: 0;
    font-weight: bold;
}

/* Cart Section */
.cart-container {
    text-align: center;
    background: linear-gradient(45deg, #00b894, #55efc4);
    color: #ffffff;
    padding: 20px;
    font-size: 22px;
    font-weight: bold;
    border-radius: 8px;
    box-shadow: 0 4px 10px rgba(0,0,0,0.2);
}
