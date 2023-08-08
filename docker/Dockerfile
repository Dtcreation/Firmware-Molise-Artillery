FROM python:3.9.0-buster

<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> master
# Disable warnings about not having a TTY
ARG DEBIAN_FRONTEND=noninteractive

# Disable debconf warnings
ARG DEBCONF_NOWARNINGS="yes"

# Upgrade pip
RUN pip install --upgrade pip

# Install platformio toolchain / framework and pyyaml
RUN pip install -U platformio PyYaml

# Upgrade platformio using development version / branch
RUN pio upgrade --dev

# Set working directory
WORKDIR /code

# Set volumes / mount points that we are using
VOLUME /code /root/.platformio

<<<<<<< HEAD
=======
RUN pip install -U platformio
RUN pio upgrade --dev
# To get the test platforms
RUN pip install PyYaml
>>>>>>> d19789649d7b7a6f8b9378967fb7692221afd491
=======
>>>>>>> master
#ENV PATH /code/buildroot/bin/:/code/buildroot/tests/:${PATH}
