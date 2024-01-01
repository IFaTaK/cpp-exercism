//
// Created by Kilian LEFEVRE on 31/12/2023.
//
// ovenTime returns the amount in minutes that the lasagna should stay in the
// oven.
int ovenTime() {
    // Return the correct time.
    int expectedOvenTime = 40;
    return expectedOvenTime;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
    // Calculate and return the remaining in the oven based on the time
    // the lasagna has already been there.
    int expectedOvenTime = ovenTime();
    return expectedOvenTime - actualMinutesInOven;
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
    // Calculate and return the preparation time with the
    // `numberOfLayers`.
    int preparationTimeOneLayer = 2;
    return numberOfLayers * preparationTimeOneLayer;
}

// elapsedTime calculates the total time spent to create and bake the lasagna so
// far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    // Calculate and return the total time so far.
    return actualMinutesInOven + preparationTime(numberOfLayers);
}
