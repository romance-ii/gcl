/exec/ a \
   -eval '(if (not (MPI::MPI-Initialized)) (MPI::MPI-Init))' \\
/exec/ a \
   -eval '(MPI::init-slave-listener)' \\
