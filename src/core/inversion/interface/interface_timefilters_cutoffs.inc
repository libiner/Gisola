INTERFACE

      SUBROUTINE CUTOFFS(SN, SD, NSECTS, F)
      IMPLICIT NONE
!$OMP DECLARE TARGET
!$ACC ROUTINE SEQ
      REAL F
      INTEGER NSECTS
      REAL*4 SN(1), SD(1)

      END SUBROUTINE CUTOFFS

END INTERFACE
