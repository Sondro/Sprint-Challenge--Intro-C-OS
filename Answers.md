## What are some of the tasks that a general operating system is responsible for handling?
  ### Pre-Boot
- BIOS (Basic Input/Output System): flash memory based hardware instructions communicate
with themselves and each other using the CMOS settings.
- CMOS (Complementary Metal Oxide Semiconductor): a motherboard chip that stores BIOS 
  instructions in flash memory (ie, 64 bytes).
  - Many boards have a backup CMOS for alternate settings and in case the of data corruption.
    - Set via jumper pin(s).
- Memory Registers (RAM): are loaded and power management is started.
- POST (Power-On Self-Test): tests hardware components to determine the system's boot fitness.
    - Feedback may be relayed via audible beep code (ie, single short for pass).
       - Or LED blinks/colors.

### Boot[strap load]
- Boot[strap] Loader [program]: On successful POST, the system 'bootstraps' or pulls itself
  together.
   - This occurs by accessing the ROM device and memory location where the OS loading
     instructions are located (ie, boot sector on a hard disc).
     - The core of the OS (the kernel) is loaded and starts itself.

### O[perating] S[ystem]
- Device Drivers
  - Various drivers are loaded into a combo of Kernel Mode/Space and User Mode/Space.
   - Kernel Mode/Space: More performant, high-access and privileged processes.
   - User Mode/Space: Protected and less privileged access processes. Stable and slow.
     - Note moving data between spaces and modes is slow and hardware intensive.
  - Virtual Device Drivers: emulated hardware (ie DOS, VM ware) have access to device
    systems like IRQs.
- Process Management
  - Multitasking/programming
    - Parallel processing
      - Multi-core processors.
      - Bridging processors.
      - Distributed systems (nodes).
    - Specialized bus architecture
      - Pipes optimized for parallel data flow.
      - Pipes/Units optimized for parallel micro-instructions.
    - Interleaving processes.
  - Process Creation
    - Process batches.
    - Process node parent/child spawning.
  - Process Termination
    - Batch halt instructions.
    - Hardware errors.
    - Software errors.
    - User instructions.
    - Process completed.
  - Two-state process model
    - RUNNING.
    - NOT RUNNING.
  - Three-state process
    - RUNNING.
    - READY (queued).
    - BLOCKED (requires event handling to change state).
  - Five-state process: swapping or 'suspending' states into buffers for efficiency.
    - RUNNING.
    - READY (queued).
    - BLOCKED (requires event handling to change state).
    - READY SUSPEND (READY process loaded into a swap buffer).
    - BLOCKED SUSPEND (BLOCKED process loaded into a swap buffer).
- Interrupt Requests (IRQs, aka 'Interrupts')
  - The systems that manages and interleaves device processes with system processes.
    - IRQ lines send messages from hardware to the CPU to 'interrupt' or take priority.
      - Interrupt Handler: the program that loads the interrupt and processes it.
      - Used for various inputs keyboard, mouse, hard drive, sound, video, etc.
      - IRQs are numbered and can be set in the BIOS to avoid conflicts between devices.
      - Newer devices may have dedicated Interrupt Controllers and/or support IRQ sharing.
      - 'Plug and Play' is the system of auto-configuring IRQs when devices are inserted.
- File system
  - Provides a directory/folder structure
    - Uses tables and/or nodes for look-up.
    - Examples include NTFS and FAT (Windows), HFS and HPFS (Apple), EXT, XFS (Linux).
    - Metadata: Miscellaneous for managing files (ie attributes on Windows).
  - U[ser] I[nterface]: provides tools for manipulating files:
    - Text based: uses typed commands with typing device (ie, keyboard or touchscreen).
    - G[raphical] U[ser] I[nterface]: uses a pointer device (ie, a mouse or touchscreen).
- Memory Management
  - Virtual Memory: page swapping hard disk ROM with RAM to increase the available resources
    for processing.
    - Levels of memory:
      - OS memory: pre-cached and makes the OS and UI more responsive.
      - Application memory: garbage collection exited processes.
        - Improves application performance if the OS has plenty.
- I[nput]/O[uput]
  - Memory mapped I/O interfaces and abstractions for the Bus and IRQs.
    - Channel I/O: software based DMA with more options.
    - Port-mapped I/O: port number assignment and management.
- Networking
  - Software based networking hardware: topology, routing, packet management, port mapping,
    protocol configuration.
  - Providing a visual interface for networking hardware.
- Security
  - Integrity.
    - Vulnerability patch fixes.
  - Integrated tools:
    - Malware removal.
    - Firewall/net traffic monitoring and control.
    - Network encryption.
  - Filesystem:
    - Local encryption.
    - User/privilege metadata.
  - UI for software tools:
    - IE, Metasploit Framework for Pen[etration] testing.
  - UI for hardware tools
    - IE, Oracle database hardware based firewall.