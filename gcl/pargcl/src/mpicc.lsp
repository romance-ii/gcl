(if compiler::*mpicc*
  (progn
    (setq compiler::*cc*
      (concatenate 'string compiler::*mpicc*
        (subseq compiler::*cc*
          (position-if #'(lambda (x) (char= x #\space)) compiler::*cc*))))
    (setq compiler::*ld*
      (concatenate 'string compiler::*mpicc*
        (subseq compiler::*ld*
          (position-if #'(lambda (x) (char= x #\space)) compiler::*ld*))))
  )
)
