#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# Makefile for the host and embedded target (MSP432) platforms
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <FILE>.i    - Builds <FILE>.i preprocessed file
#      <FILE>.asm  - Builds <FILE>.asm assembly file
#      <FILE>.o    - Builds <FILE>.o object file
#      compile-all - Builds all source files (DOES NOT LINK)
#      build       - Builds and links all source files
#      clean       - Removes all generated files
#
# Platform Overrides:
#      PLATFORM - Host or embedded platform (HOST, MSP432)
#
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides
PLATFORM = 

# Architectures Specific Flags
LINKER_FILE = 
CPU = 
ARCH = 
SPECS = 

# Compiler Flags and Defines
CC = 
LD = 
LDFLAGS = 
CFLAGS = 
CPPFLAGs = 

#------------------------------------------------------------------------------
# TARGET: make *.i
#
#   Generates the preprocessed output of all C-program implementation files
#------------------------------------------------------------------------------

#------------------------------------------------------------------------------
# TARGET: make *.asm
#
#   Generates the assembly output of C-program implementation files and the
#   final output executable
#------------------------------------------------------------------------------

#------------------------------------------------------------------------------
# TARGET: make *.o
#
#   Generates the object file for all C-source files by specifying the desired
#   compiled object file (DOES NOT LINK)
#------------------------------------------------------------------------------

#------------------------------------------------------------------------------
# TARGET: make compile-all
#
#   Compiles all object files (DOES NOT LINK)
#------------------------------------------------------------------------------

#------------------------------------------------------------------------------
# TARGET: make build
#
#   Compiles all object files and link into a final executable
#------------------------------------------------------------------------------

#------------------------------------------------------------------------------
# TARGET: make clean
#
#   Removes all commpiled objects, preprocessed outputs, assembly outputs,
#   executable files, and build output files
#   Includes but not limited to:
#     - *.asm
#     - *.i
#     - *.map
#     - *.o
#     - *.out
#------------------------------------------------------------------------------