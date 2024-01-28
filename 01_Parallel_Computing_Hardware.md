# Parallel computing architectures

## Flynn's taxonomy

![Alt text](image.png)

- **`SISD`**: Single Instruction, Single Data
  - Describes the organization of a conventional uniprocessor machine
  - ![Alt text](image-1.png)
- **`SIMD`**: Single Instruction, Multiple Data
  - Description: A single instruction is broadcast to multiple processing elements, which simultaneously perform the same operation on different data.
  - Example: GPU
  - ![Alt text](image-2.png)
- **`MISD`**: Multiple Instruction, Single Data
  - Description: Multiple processing elements simultaneously execute different operations on the same data.
  - Example: Fault-tolerant systems
  - ![Alt text](image-3.png)
- **`MIMD`**: Multiple Instruction, Multiple Data
  - Description: Multiple processing elements simultaneously execute different operations on different data.
  - Example: Multicore CPU
  - This is subdivided into two categories:
    - **`SPMD`**: Single Program, Multiple Data
      - All processors execute the same program, but each processor has its own data.
      - It's diferent from SIMD because each processor can execute different instructions at the same time.
    - **`MPMD`**: Multiple Program, Multiple Data
      - Each processor may execute a different program, and each processor has its own data.
  - ![Alt text](image-4.png)

## Shared memory vs Distributed memory

- **`Shared memory`**: All processors have access to a global memory.
  - **`Unifor memory access (UMA)`**: All processors have the same access time to the memory.
    - ![Alt text](image-5.png)
    - Some types of UMA:
      - **`Symmetric multiprocessor (SMP)`**: All processors are identical and share the same memory.
        - ![Alt text](image-6.png)
  - **`Non-uniform memory access (NUMA)`**: Processors have different access times to the memory.
    - Its a multiple SMP systems together.
    - Access non-uniform because the access time to the memory is different for each processor.
    - ![Alt text](image-7.png)

- **`Distributed memory`**: Each processor has its own local memory, and processors can access each other's memory.
  - Description: Each processor has its own local memory, and processors can access each other's memory.
  - Each processor operates independently and has its own memory. That change is not automatically reflected in the memory of other processors.
  - The advantage of this architecture is that it is scalable, since the memory of each processor is independent of the others.
  - ![Alt text](image-8.png)

> For this course we'll stick a simple shared memory in a SMP architecture.

# Questions

![Alt text](image-9.png)

![Alt text](image-10.png)

![Alt text](image-11.png)

![Alt text](image-12.png)

![Alt text](image-13.png)