INTERFACE

      SUBROUTINE FILTER15(KEYFIL, KEYDIS, SHIFT, F1, F4, TIMSTEP, B)

      USE PARAMETERS

      IMPLICIT NONE
!$OMP DECLARE TARGET
!$ACC ROUTINE SEQ
      REAL B, F1, F4, SHIFT, TIMSTEP
      INTEGER KEYDIS, KEYFIL

      DIMENSION B(NUM_OF_TIME_SAMPLES)

      END SUBROUTINE FILTER15

END INTERFACE
