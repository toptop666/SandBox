# Use Alpine as a base image
FROM alpine:latest

# Install necessary build tools (g++, make) and remove cache to keep it light
RUN apk add --no-cache g++ make

# Set the working directory inside the container
WORKDIR /usr/src/app

# Copy the C++ source code into the container
COPY GCD.cpp .

# Compile the C++ program
RUN g++ -o GCD GCD.cpp

# Run the program
CMD ["./GCD"]
