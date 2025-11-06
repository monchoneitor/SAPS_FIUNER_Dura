#include "Classifier.h"

/**
* Predict class for features vector
*/
int predict(float *x) {
    uint8_t votes[4] = { 0 };
    // tree #1
    if (x[7] <= 0.5242384970188141) {
        if (x[0] <= 0.03060000017285347) {
            votes[2] += 1;
        }

        else {
            if (x[11] <= 2.5) {
                votes[3] += 1;
            }

            else {
                if (x[12] <= 6.662350177764893) {
                    votes[1] += 1;
                }

                else {
                    votes[2] += 1;
                }
            }
        }
    }

    else {
        if (x[14] <= 10.732649803161621) {
            if (x[3] <= 38.5) {
                if (x[3] <= 16.0) {
                    votes[0] += 1;
                }

                else {
                    if (x[2] <= -0.16199999302625656) {
                        votes[0] += 1;
                    }

                    else {
                        if (x[1] <= 0.16699999943375587) {
                            if (x[6] <= 0.32685867697000504) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }
                    }
                }
            }

            else {
                if (x[8] <= 0.47083957493305206) {
                    if (x[11] <= 7.5) {
                        votes[0] += 1;
                    }

                    else {
                        votes[3] += 1;
                    }
                }

                else {
                    if (x[13] <= 14.620599746704102) {
                        votes[3] += 1;
                    }

                    else {
                        if (x[12] <= 17.718349933624268) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }
                    }
                }
            }
        }

        else {
            votes[3] += 1;
        }
    }

    // tree #2
    if (x[7] <= 0.5242384970188141) {
        if (x[12] <= 5.253549814224243) {
            votes[2] += 1;
        }

        else {
            if (x[11] <= 4.0) {
                if (x[3] <= 22.0) {
                    votes[1] += 1;
                }

                else {
                    votes[3] += 1;
                }
            }

            else {
                votes[2] += 1;
            }
        }
    }

    else {
        if (x[14] <= 10.732649803161621) {
            if (x[10] <= 3.5) {
                if (x[6] <= 0.417958065867424) {
                    if (x[7] <= 0.5529080927371979) {
                        votes[3] += 1;
                    }

                    else {
                        if (x[1] <= 0.0778999999165535) {
                            votes[2] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }
                    }
                }

                else {
                    if (x[9] <= 3.5) {
                        votes[1] += 1;
                    }

                    else {
                        if (x[4] <= 35.5) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }
                    }
                }
            }

            else {
                if (x[13] <= 14.604899883270264) {
                    votes[3] += 1;
                }

                else {
                    if (x[6] <= 0.8091955780982971) {
                        if (x[7] <= 0.646016389131546) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[5] <= 6.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }
                    }

                    else {
                        votes[1] += 1;
                    }
                }
            }
        }

        else {
            votes[3] += 1;
        }
    }

    // tree #3
    if (x[7] <= 0.5242384970188141) {
        if (x[3] <= 30.5) {
            if (x[8] <= 0.24706053733825684) {
                votes[1] += 1;
            }

            else {
                votes[2] += 1;
            }
        }

        else {
            votes[3] += 1;
        }
    }

    else {
        if (x[14] <= 10.732649803161621) {
            if (x[3] <= 38.5) {
                if (x[5] <= 11.5) {
                    if (x[17] <= 11.80679988861084) {
                        votes[1] += 1;
                    }

                    else {
                        votes[0] += 1;
                    }
                }

                else {
                    if (x[6] <= 0.6686908900737762) {
                        if (x[13] <= 14.317350387573242) {
                            votes[2] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }
                    }

                    else {
                        votes[1] += 1;
                    }
                }
            }

            else {
                if (x[13] <= 14.620599746704102) {
                    votes[3] += 1;
                }

                else {
                    if (x[11] <= 2.5) {
                        votes[1] += 1;
                    }

                    else {
                        votes[0] += 1;
                    }
                }
            }
        }

        else {
            votes[3] += 1;
        }
    }

    // tree #4
    if (x[7] <= 0.5242384970188141) {
        if (x[3] <= 30.5) {
            if (x[0] <= 0.03060000017285347) {
                votes[2] += 1;
            }

            else {
                if (x[15] <= 1.3995000123977661) {
                    votes[2] += 1;
                }

                else {
                    votes[1] += 1;
                }
            }
        }

        else {
            votes[3] += 1;
        }
    }

    else {
        if (x[8] <= 0.7210274636745453) {
            if (x[10] <= 3.5) {
                if (x[15] <= 3.4144999980926514) {
                    if (x[13] <= 9.987200260162354) {
                        votes[3] += 1;
                    }

                    else {
                        if (x[0] <= -0.038200000301003456) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[10] <= 2.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }
                    }
                }

                else {
                    if (x[16] <= 8.603999614715576) {
                        if (x[5] <= 11.5) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }
                    }

                    else {
                        votes[1] += 1;
                    }
                }
            }

            else {
                if (x[13] <= 14.604899883270264) {
                    votes[3] += 1;
                }

                else {
                    if (x[15] <= 14.913050174713135) {
                        if (x[5] <= 6.0) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[13] <= 14.92359972000122) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }
                    }

                    else {
                        votes[1] += 1;
                    }
                }
            }
        }

        else {
            votes[3] += 1;
        }
    }

    // tree #5
    if (x[13] <= 9.036749839782715) {
        if (x[1] <= -0.1592000052332878) {
            votes[3] += 1;
        }

        else {
            if (x[8] <= 0.24706053733825684) {
                votes[1] += 1;
            }

            else {
                votes[2] += 1;
            }
        }
    }

    else {
        if (x[8] <= 0.7846466302871704) {
            if (x[3] <= 38.5) {
                if (x[10] <= 3.5) {
                    if (x[12] <= 1.9828499555587769) {
                        votes[2] += 1;
                    }

                    else {
                        if (x[3] <= 15.5) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }
                    }
                }

                else {
                    if (x[13] <= 20.649200439453125) {
                        if (x[14] <= 4.21370005607605) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }
                    }

                    else {
                        votes[0] += 1;
                    }
                }
            }

            else {
                if (x[13] <= 14.620599746704102) {
                    votes[3] += 1;
                }

                else {
                    if (x[12] <= 17.718349933624268) {
                        votes[0] += 1;
                    }

                    else {
                        votes[1] += 1;
                    }
                }
            }
        }

        else {
            votes[3] += 1;
        }
    }

    // tree #6
    if (x[7] <= 0.5242384970188141) {
        if (x[3] <= 30.5) {
            if (x[8] <= 0.24706053733825684) {
                votes[1] += 1;
            }

            else {
                votes[2] += 1;
            }
        }

        else {
            votes[3] += 1;
        }
    }

    else {
        if (x[0] <= 0.09870000183582306) {
            if (x[1] <= -0.03309999965131283) {
                if (x[5] <= 11.5) {
                    if (x[4] <= 35.5) {
                        votes[1] += 1;
                    }

                    else {
                        votes[0] += 1;
                    }
                }

                else {
                    if (x[15] <= 6.004800081253052) {
                        if (x[10] <= 1.5) {
                            votes[1] += 1;
                        }

                        else {
                            votes[2] += 1;
                        }
                    }

                    else {
                        votes[3] += 1;
                    }
                }
            }

            else {
                if (x[10] <= 3.5) {
                    if (x[8] <= 0.8271334767341614) {
                        if (x[3] <= 43.0) {
                            if (x[2] <= -0.08579999953508377) {
                                if (x[15] <= 6.35194993019104) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 0.031199999153614044) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }
                    }

                    else {
                        votes[3] += 1;
                    }
                }

                else {
                    if (x[6] <= 0.4212007373571396) {
                        if (x[17] <= 6.45484983921051) {
                            votes[0] += 1;
                        }

                        else {
                            votes[3] += 1;
                        }
                    }

                    else {
                        if (x[13] <= 14.92359972000122) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[13] <= 20.649200439453125) {
                                if (x[6] <= 0.619512140750885) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }
                    }
                }
            }
        }

        else {
            if (x[14] <= 3.0687999725341797) {
                if (x[6] <= 0.7019820809364319) {
                    votes[0] += 1;
                }

                else {
                    votes[1] += 1;
                }
            }

            else {
                if (x[6] <= 0.8648910522460938) {
                    votes[3] += 1;
                }

                else {
                    votes[1] += 1;
                }
            }
        }
    }

    // tree #7
    if (x[13] <= 9.036749839782715) {
        if (x[12] <= 7.570199966430664) {
            if (x[5] <= 25.5) {
                votes[2] += 1;
            }

            else {
                if (x[6] <= 0.46737076342105865) {
                    votes[1] += 1;
                }

                else {
                    votes[2] += 1;
                }
            }
        }

        else {
            votes[3] += 1;
        }
    }

    else {
        if (x[14] <= 13.985849380493164) {
            if (x[3] <= 38.5) {
                if (x[5] <= 11.5) {
                    if (x[3] <= 15.5) {
                        votes[0] += 1;
                    }

                    else {
                        votes[1] += 1;
                    }
                }

                else {
                    if (x[4] <= 35.0) {
                        if (x[1] <= -0.046800000593066216) {
                            votes[2] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }
                    }

                    else {
                        votes[1] += 1;
                    }
                }
            }

            else {
                if (x[13] <= 14.620599746704102) {
                    votes[3] += 1;
                }

                else {
                    if (x[11] <= 2.5) {
                        votes[1] += 1;
                    }

                    else {
                        votes[0] += 1;
                    }
                }
            }
        }

        else {
            votes[3] += 1;
        }
    }

    // tree #8
    if (x[13] <= 9.036749839782715) {
        if (x[16] <= 8.578350305557251) {
            if (x[8] <= 0.24706053733825684) {
                votes[1] += 1;
            }

            else {
                votes[2] += 1;
            }
        }

        else {
            votes[3] += 1;
        }
    }

    else {
        if (x[14] <= 13.985849380493164) {
            if (x[10] <= 3.5) {
                if (x[6] <= 0.417958065867424) {
                    if (x[5] <= 9.0) {
                        votes[0] += 1;
                    }

                    else {
                        if (x[11] <= 4.5) {
                            votes[2] += 1;
                        }

                        else {
                            votes[3] += 1;
                        }
                    }
                }

                else {
                    if (x[9] <= 3.5) {
                        votes[1] += 1;
                    }

                    else {
                        if (x[2] <= -0.03619999997317791) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }
                    }
                }
            }

            else {
                if (x[7] <= 0.625945121049881) {
                    votes[3] += 1;
                }

                else {
                    if (x[11] <= 9.5) {
                        if (x[11] <= 2.5) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[13] <= 14.92359972000122) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[6] <= 0.6222364902496338) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[13] <= 23.01425075531006) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }
                    }

                    else {
                        votes[3] += 1;
                    }
                }
            }
        }

        else {
            votes[3] += 1;
        }
    }

    // tree #9
    if (x[7] <= 0.5242384970188141) {
        if (x[0] <= 0.03060000017285347) {
            votes[2] += 1;
        }

        else {
            if (x[7] <= 0.40120357275009155) {
                if (x[8] <= 0.4174586534500122) {
                    votes[1] += 1;
                }

                else {
                    votes[2] += 1;
                }
            }

            else {
                votes[3] += 1;
            }
        }
    }

    else {
        if (x[0] <= 0.09870000183582306) {
            if (x[10] <= 3.5) {
                if (x[14] <= 12.046449661254883) {
                    if (x[6] <= 0.40661005675792694) {
                        if (x[16] <= 4.013100028038025) {
                            votes[0] += 1;
                        }

                        else {
                            votes[2] += 1;
                        }
                    }

                    else {
                        if (x[3] <= 15.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[9] <= 4.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }
                    }
                }

                else {
                    votes[3] += 1;
                }
            }

            else {
                if (x[13] <= 14.92359972000122) {
                    if (x[13] <= 14.452399730682373) {
                        votes[3] += 1;
                    }

                    else {
                        votes[1] += 1;
                    }
                }

                else {
                    if (x[5] <= 6.0) {
                        votes[1] += 1;
                    }

                    else {
                        votes[0] += 1;
                    }
                }
            }
        }

        else {
            if (x[6] <= 0.8384048640727997) {
                if (x[14] <= 3.0687999725341797) {
                    votes[0] += 1;
                }

                else {
                    votes[3] += 1;
                }
            }

            else {
                votes[1] += 1;
            }
        }
    }

    // tree #10
    if (x[7] <= 0.5242384970188141) {
        if (x[3] <= 30.5) {
            if (x[8] <= 0.24706053733825684) {
                votes[1] += 1;
            }

            else {
                votes[2] += 1;
            }
        }

        else {
            votes[3] += 1;
        }
    }

    else {
        if (x[14] <= 10.732649803161621) {
            if (x[10] <= 3.5) {
                if (x[6] <= 0.417958065867424) {
                    if (x[4] <= 20.5) {
                        votes[0] += 1;
                    }

                    else {
                        if (x[4] <= 39.0) {
                            votes[2] += 1;
                        }

                        else {
                            votes[3] += 1;
                        }
                    }
                }

                else {
                    if (x[9] <= 3.5) {
                        votes[1] += 1;
                    }

                    else {
                        if (x[4] <= 35.5) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }
                    }
                }
            }

            else {
                if (x[13] <= 14.604899883270264) {
                    votes[3] += 1;
                }

                else {
                    if (x[5] <= 6.0) {
                        votes[1] += 1;
                    }

                    else {
                        if (x[7] <= 0.646016389131546) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[12] <= 20.724899768829346) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }
                    }
                }
            }
        }

        else {
            votes[3] += 1;
        }
    }

    // return argmax of votes
    uint8_t classIdx = 0;
    float maxVotes = votes[0];

    for (uint8_t i = 1; i < 4; i++) {
        if (votes[i] > maxVotes) {
            classIdx = i;
            maxVotes = votes[i];
        }
    }

    return classIdx;
};
/**
* Predict readable class name
*/
const char* predictLabel(float *x) {
    return idxToLabel(predict(x));
};
/**
* Convert class idx to readable name
*/
const char* idxToLabel(uint8_t classIdx) {
    switch (classIdx) {
        case 0:
        return "pase";
        case 1:
        return "pique";
        case 2:
        return "standing";
        case 3:
        return "tiro";
        default:
        return "Houston we have a problem";
    }
};