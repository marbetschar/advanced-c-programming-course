#include <stdio.h>

static double globalVarOnlyAccessibleInThisFile = 0.0;
float globalVarAccessibleWithinEntireProgram = 1.0;

static int functionOnlyAccessibleInThisFile() {
    int localVarWithBlockScopeAndTemporaryStorage = 1;
    static float localVarWithPermanentStorage = 1.0;
    register int varStoredInRegister = 10;
}