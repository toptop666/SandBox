# Use the official Python image from the Docker Hub
FROM python:3.9-slim

# Set the working directory in the container
WORKDIR /app

# Copy the GCD program into the container
COPY GCD.py .
COPY requirements.txt .

# Install the required packages
RUN pip install -r requirements.txt

# Set the command to run the GCD program
CMD ["python", "GCD.py"]
