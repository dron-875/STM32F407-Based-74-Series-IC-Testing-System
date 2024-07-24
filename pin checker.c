



if (ic_code == 7400 || ic_code == 7403 || ic_code == 7424 || ic_code == 7426 || ic_code == 7437 || ic_code == 7438 ) {
        bool check = true;
        digitalWrite(L1, 0); digitalWrite(L2, 0);
        digitalWrite(L4, 0); digitalWrite(L5, 0);
        digitalWrite(L9, 0); digitalWrite(L10, 0);
        digitalWrite(L12, 0); digitalWrite(L13, 0);
        if ((digitalRead(L3) == 1) && (digitalRead(L6) == 1) && (digitalRead(L8) == 1) && (digitalRead(L11) == 1))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////
        digitalWrite(L1, 0); digitalWrite(L2, 1);
        digitalWrite(L4, 0); digitalWrite(L5, 1);
        digitalWrite(L9, 0); digitalWrite(L10, 1);
        digitalWrite(L12, 0); digitalWrite(L13, 1);
        if ((digitalRead(L3) == 1) && (digitalRead(L6) == 1) && (digitalRead(L8) == 1) && (digitalRead(L11) == 1))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////
        digitalWrite(L1, 1); digitalWrite(L2, 0);
        digitalWrite(L4, 1); digitalWrite(L5, 0);
        digitalWrite(L9, 1); digitalWrite(L10, 0);
        digitalWrite(L12, 1); digitalWrite(L13, 0);
        if ((digitalRead(L3) == 1) && (digitalRead(L6) == 1) && (digitalRead(L8) == 1) && (digitalRead(L11) == 1))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////
        digitalWrite(L1, 1); digitalWrite(L2, 1);
        digitalWrite(L4, 1); digitalWrite(L5, 1);
        digitalWrite(L9, 1); digitalWrite(L10, 1);
        digitalWrite(L12, 1); digitalWrite(L13, 1);
        if ((digitalRead(L3) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0) && (digitalRead(L11) == 0))
            check = check;
        else
            check = false;

        Serial.println(check);
        Serial.println(ic_code);
    }





///////////////////////////////////////// 
else if (ic_code == 7401) {
        bool check = true;
        digitalWrite(L2, 0); digitalWrite(L3, 0);
        digitalWrite(L6, 0); digitalWrite(L5, 0);
        digitalWrite(L9, 0); digitalWrite(L8, 0);
        digitalWrite(L12, 0); digitalWrite(L11, 0);
        if ((digitalRead(L3) == 1) && (digitalRead(L6) == 1) && (digitalRead(L10) == 1) && (digitalRead(L13) == 1))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////
       digitalWrite(L2, 0); digitalWrite(L3, 1);
        digitalWrite(L6, 0); digitalWrite(L5, 1);
        digitalWrite(L9, 0); digitalWrite(L8, 1);
        digitalWrite(L12, 0); digitalWrite(L11, 1);
        if ((digitalRead(L1) == 1) && (digitalRead(L4) == 1) && (digitalRead(L10) == 1) && (digitalRead(L13) == 1))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////
        digitalWrite(L2, 1); digitalWrite(L3, 0);
        digitalWrite(L6, 1); digitalWrite(L5, 0);
        digitalWrite(L9, 1); digitalWrite(L8, 0);
        digitalWrite(L12,1); digitalWrite(L11,0);
        if ((digitalRead(L1) == 1) && (digitalRead(L4) == 1) && (digitalRead(L10) == 1) && (digitalRead(L13) == 1))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////
        digitalWrite(L2, 1); digitalWrite(L3, 1);
        digitalWrite(L6, 1); digitalWrite(L5, 1);
        digitalWrite(L9, 1); digitalWrite(L8, 1);
        digitalWrite(L12,1); digitalWrite(L11,1);
        if ((digitalRead(L1) == 0) && (digitalRead(L4) == 0) && (digitalRead(L10) == 0) && (digitalRead(L13) == 0))
            check = check;
        else
            check = false;

        Serial.println(check);
        Serial.println(ic_code);
    }



///////////////////////////////////////////////



else if (ic_code == 7402 || ic_code == 7428 || ic_code == 7433) {
        bool check = true;
        digitalWrite(L2, 0); digitalWrite(L3, 0);
        digitalWrite(L6, 0); digitalWrite(L5, 0);
        digitalWrite(L9, 0); digitalWrite(L8, 0);
        digitalWrite(L12, 0); digitalWrite(L11, 0);
        if ((digitalRead(L1) == 1) && (digitalRead(L4) == 1) && (digitalRead(L10) == 1) && (digitalRead(L13) == 1))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////
       digitalWrite(L2, 0); digitalWrite(L3, 1);
        digitalWrite(L6, 0); digitalWrite(L5, 1);
        digitalWrite(L9, 0); digitalWrite(L8, 1);
        digitalWrite(L12, 0); digitalWrite(L11, 1);
        if ((digitalRead(L1) == 0) && (digitalRead(L4) == 0) && (digitalRead(L10) == 0) && (digitalRead(L13) == 0))
                    check = check;
        else
            check = false;
        ///////////////////////////////////////////////
        digitalWrite(L2, 1); digitalWrite(L3, 0);
        digitalWrite(L6, 1); digitalWrite(L5, 0);
        digitalWrite(L9, 1); digitalWrite(L8, 0);
        digitalWrite(L12,1); digitalWrite(L11,0);
       if ((digitalRead(L1) == 0) && (digitalRead(L4) == 0) && (digitalRead(L10) == 0) && (digitalRead(L13) == 0))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////
        digitalWrite(L2, 1); digitalWrite(L3, 1);
        digitalWrite(L6, 1); digitalWrite(L5, 1);
        digitalWrite(L9, 1); digitalWrite(L8, 1);
        digitalWrite(L12,1); digitalWrite(L11,1);
        if ((digitalRead(L1) == 0) && (digitalRead(L4) == 0) && (digitalRead(L10) == 0) && (digitalRead(L13) == 0))
            check = check;
        else
            check = false;

        Serial.println(check);
        Serial.println(ic_code);
    }



////////////////////
else if (ic_code == 7404 || ic_code == 7405 || ic_code == 7406 || ic_code == 7414 || ic_code == 7416 || ic_code == 7417 || ic_code == 7419 || ic_code == 7434) {
        bool check = true;
        

        digitalWrite(L1, 0);
        if (digitalRead(L2) == 1)
            check = check;
        else
            check = false;

        digitalWrite(L3, 0);
        if (digitalRead(L4) == 1)
            check = check;
        else
            check = false;

        digitalWrite(L5, 0);
        if (digitalRead(L6) == 1)
            check = check;
        else
            check = false;

        digitalWrite(L9, 0);
        if (digitalRead(L8) == 1)
            check = check;
        else
            check = false;

        digitalWrite(L11, 0);
        if (digitalRead(L10) == 1)
            check = check;
        else
            check = false;

        digitalWrite(L13, 0);
        if (digitalRead(L12) == 1)
            check = check;
        else
            check = false;

        digitalWrite(L1, 1);
        if (digitalRead(L2) == 0)
            check = check;
        else
            check = false;

        digitalWrite(L3, 1);
        if (digitalRead(L4) == 0)
            check = check;
        else
            check = false;

        digitalWrite(L5, 1);
        if (digitalRead(L6) == 0)
            check = check;
        else
            check = false;

        digitalWrite(L9, 1);
        if (digitalRead(L8) == 0)
            check = check;
        else
            check = false;

        digitalWrite(L11, 1);
        if (digitalRead(L10) == 0)
            check = check;
        else
            check = false;

        digitalWrite(L13, 1);
        if (digitalRead(L12) == 0)
            check = check;
        else
            check = false;

        Serial.println(check);
        Serial.println(ic_code);
    }

//////////////////////////////////////////////////////


else if (ic_code == 7408 || ic_code == 7409) {
        bool check = true;
        digitalWrite(L1, 0); digitalWrite(L2, 0);
        digitalWrite(L4, 0); digitalWrite(L5, 0);
        digitalWrite(L9, 0); digitalWrite(L10, 0);
        digitalWrite(L12, 0); digitalWrite(L13, 0);
         if ((digitalRead(L3) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0) && (digitalRead(L11) == 0))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////
        digitalWrite(L1, 0); digitalWrite(L2, 1);
        digitalWrite(L4, 0); digitalWrite(L5, 1);
        digitalWrite(L9, 0); digitalWrite(L10, 1);
        digitalWrite(L12, 0); digitalWrite(L13, 1);
 if ((digitalRead(L3) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0) && (digitalRead(L11) == 0))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////
        digitalWrite(L1, 1); digitalWrite(L2, 0);
        digitalWrite(L4, 1); digitalWrite(L5, 0);
        digitalWrite(L9, 1); digitalWrite(L10, 0);
        digitalWrite(L12, 1); digitalWrite(L13, 0);
         if ((digitalRead(L3) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0) && (digitalRead(L11) == 0))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////
        digitalWrite(L1, 1); digitalWrite(L2, 1);
        digitalWrite(L4, 1); digitalWrite(L5, 1);
        digitalWrite(L9, 1); digitalWrite(L10, 1);
        digitalWrite(L12, 1); digitalWrite(L13, 1);
        if ((digitalRead(L3) == 1) && (digitalRead(L6) == 1) && (digitalRead(L8) == 1) && (digitalRead(L11) == 1))
            check = check;
        else
            check = false;

        Serial.println(check);
        Serial.println(ic_code);
    }
////////////////////////////
// 3ip nand


else if (ic_code == 7410 || ic_code == 7412) {
        bool check = true;
        digitalWrite(L1, 0);  digitalWrite(L2, 0); digitalWrite(L13, 0);
        digitalWrite(L4, 0);  digitalWrite(L5, 0); digitalWrite(L3,  0);
        digitalWrite(L9, 0); digitalWrite(L10, 0); digitalWrite(L11, 0);
       
        if ((digitalRead(L12) == 1) && (digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////
        digitalWrite(L1, 0);  digitalWrite(L2, 0); digitalWrite(L13, 1);
        digitalWrite(L4, 0);  digitalWrite(L5, 0); digitalWrite(L3,  1);
        digitalWrite(L9, 0); digitalWrite(L10, 0); digitalWrite(L11, 1);
       
        if ((digitalRead(L12) == 1) && (digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;
        /////
        digitalWrite(L1, 0);  digitalWrite(L2, 1); digitalWrite(L13, 0);
        digitalWrite(L4, 0);  digitalWrite(L5, 1); digitalWrite(L3,  0);
        digitalWrite(L9, 0); digitalWrite(L10, 1); digitalWrite(L11, 0);
       
        if ((digitalRead(L12) == 1) && (digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;
        ////
        digitalWrite(L1, 0);  digitalWrite(L2, 1); digitalWrite(L13, 1);
        digitalWrite(L4, 0);  digitalWrite(L5, 1); digitalWrite(L3,  1);
        digitalWrite(L9, 0); digitalWrite(L10, 1); digitalWrite(L11, 1);
       
        if ((digitalRead(L12) == 1) && (digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////
        digitalWrite(L1, 1);  digitalWrite(L2, 0); digitalWrite(L13, 0);
        digitalWrite(L4, 1);  digitalWrite(L5, 0); digitalWrite(L3,  0);
        digitalWrite(L9, 1); digitalWrite(L10, 0); digitalWrite(L11, 0);
       
        if ((digitalRead(L12) == 1) && (digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;
        /////
        digitalWrite(L1, 1);  digitalWrite(L2, 0); digitalWrite(L13, 1);
        digitalWrite(L4, 1);  digitalWrite(L5, 0); digitalWrite(L3,  1);
        digitalWrite(L9, 1); digitalWrite(L10, 0); digitalWrite(L11, 1);
       
        if ((digitalRead(L12) == 1) && (digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;
        ////
         digitalWrite(L1,1);  digitalWrite(L2, 1); digitalWrite(L13, 0);
        digitalWrite(L4, 1);  digitalWrite(L5, 1); digitalWrite(L3,  0);
        digitalWrite(L9, 1); digitalWrite(L10, 1); digitalWrite(L11, 0);
       
        if ((digitalRead(L12) == 1) && (digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;
        /////
         digitalWrite(L1,1);  digitalWrite(L2, 1); digitalWrite(L13, 1);
        digitalWrite(L4, 1);  digitalWrite(L5, 1); digitalWrite(L3,  1);
        digitalWrite(L9, 1); digitalWrite(L10, 1); digitalWrite(L11, 1);
       
        if ((digitalRead(L12) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;

        Serial.println(check);
        Serial.println(ic_code);
    }


////////////////////


else if (ic_code == 7411 || ic_code == 7415) {
        bool check = true;
        digitalWrite(L1, 0);  digitalWrite(L2, 0); digitalWrite(L13, 0);
        digitalWrite(L4, 0);  digitalWrite(L5, 0); digitalWrite(L3,  0);
        digitalWrite(L9, 0); digitalWrite(L10, 0); digitalWrite(L11, 0);
       
        if ((digitalRead(L12) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////
        digitalWrite(L1, 0);  digitalWrite(L2, 0); digitalWrite(L13, 1);
        digitalWrite(L4, 0);  digitalWrite(L5, 0); digitalWrite(L3,  1);
        digitalWrite(L9, 0); digitalWrite(L10, 0); digitalWrite(L11, 1);
       
        if ((digitalRead(L12) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        /////
        digitalWrite(L1, 0);  digitalWrite(L2, 1); digitalWrite(L13, 0);
        digitalWrite(L4, 0);  digitalWrite(L5, 1); digitalWrite(L3,  0);
        digitalWrite(L9, 0); digitalWrite(L10, 1); digitalWrite(L11, 0);
       
        if ((digitalRead(L12) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        ////
        digitalWrite(L1, 0);  digitalWrite(L2, 1); digitalWrite(L13, 1);
        digitalWrite(L4, 0);  digitalWrite(L5, 1); digitalWrite(L3,  1);
        digitalWrite(L9, 0); digitalWrite(L10, 1); digitalWrite(L11, 1);
       
        if ((digitalRead(L12) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////
        digitalWrite(L1, 1);  digitalWrite(L2, 0); digitalWrite(L13, 0);
        digitalWrite(L4, 1);  digitalWrite(L5, 0); digitalWrite(L3,  0);
        digitalWrite(L9, 1); digitalWrite(L10, 0); digitalWrite(L11, 0);
       
    if ((digitalRead(L12) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        /////
        digitalWrite(L1, 1);  digitalWrite(L2, 0); digitalWrite(L13, 1);
        digitalWrite(L4, 1);  digitalWrite(L5, 0); digitalWrite(L3,  1);
        digitalWrite(L9, 1); digitalWrite(L10, 0); digitalWrite(L11, 1);
       
        if ((digitalRead(L12) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        ////
         digitalWrite(L1,1);  digitalWrite(L2, 1); digitalWrite(L13, 0);
        digitalWrite(L4, 1);  digitalWrite(L5, 1); digitalWrite(L3,  0);
        digitalWrite(L9, 1); digitalWrite(L10, 1); digitalWrite(L11, 0);
       
        if ((digitalRead(L12) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        /////
         digitalWrite(L1,1);  digitalWrite(L2, 1); digitalWrite(L13, 1);
        digitalWrite(L4, 1);  digitalWrite(L5, 1); digitalWrite(L3,  1);
        digitalWrite(L9, 1); digitalWrite(L10, 1); digitalWrite(L11, 1);
       
        if ((digitalRead(L12) == 1) && (digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;

        Serial.println(check);
        Serial.println(ic_code);
    }

///////////////////////////////////////////////////////////////////////////////////////////////
// 4 ip NAND

else if (ic_code == 7413 || ic_code == 7418 || ic_code == 7420 || ic_code == 7422 || ic_code == 7440) {
        bool check = true;

        digitalWrite(L1, 0);  digitalWrite(L2, 0); digitalWrite(L4,  0);  digitalWrite(L5,0);
        digitalWrite(L9, 0); digitalWrite(L10, 0); digitalWrite(L12, 0); digitalWrite(L13,0);
       
        if ((digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////

        digitalWrite(L1, 0);  digitalWrite(L2, 0); digitalWrite(L4,  0);  digitalWrite(L5,1);
        digitalWrite(L9, 0); digitalWrite(L10, 0); digitalWrite(L12, 0); digitalWrite(L13,1);
       
        if ((digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////

        digitalWrite(L1, 0);  digitalWrite(L2, 0); digitalWrite(L4, 1);  digitalWrite(L5,0);
        digitalWrite(L9, 0); digitalWrite(L10, 0); digitalWrite(L12,1); digitalWrite(L13,0);
       
        if ((digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;
        //////////////////////////////////////////////////////

         digitalWrite(L1, 0);  digitalWrite(L2,0); digitalWrite(L4, 1);  digitalWrite(L5,1);
        digitalWrite(L9, 0); digitalWrite(L10, 0); digitalWrite(L12,1); digitalWrite(L13,1);
       
        if ((digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;

        ///////////////////////////////////////////////////
        digitalWrite(L1, 0);  digitalWrite(L2, 1); digitalWrite(L4, 0);  digitalWrite(L5,0);
        digitalWrite(L9, 0); digitalWrite(L10, 1); digitalWrite(L12,0); digitalWrite(L13,0);
       
        if ((digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;

        ///////////////////////////////////////////////////
        digitalWrite(L1, 0);  digitalWrite(L2, 1); digitalWrite(L4, 0);  digitalWrite(L5,1);
        digitalWrite(L9, 0); digitalWrite(L10, 1); digitalWrite(L12,0); digitalWrite(L13,1);
       
        if ((digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;

        //////////////////////////////////////////////////////
        digitalWrite(L1, 0);  digitalWrite(L2, 1); digitalWrite(L4, 1);  digitalWrite(L5,0);
        digitalWrite(L9, 0); digitalWrite(L10, 1); digitalWrite(L12,1); digitalWrite(L13,0);
       
        if ((digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;

        ///////////////////////////////////////////////////

        digitalWrite(L1, 0);  digitalWrite(L2, 1); digitalWrite(L4, 1);  digitalWrite(L5,1);
        digitalWrite(L9, 0); digitalWrite(L10, 1); digitalWrite(L12,1); digitalWrite(L13,1);
       
        if ((digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;
//////////////////////////

        digitalWrite(L1, 1);  digitalWrite(L2, 0); digitalWrite(L4,  0);  digitalWrite(L5,0);
        digitalWrite(L9, 1); digitalWrite(L10, 0); digitalWrite(L12, 0); digitalWrite(L13,0);
       
        if ((digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////

        digitalWrite(L1, 1);  digitalWrite(L2, 0); digitalWrite(L4, 0);  digitalWrite(L5,1);
        digitalWrite(L9, 1); digitalWrite(L10, 0); digitalWrite(L12,0); digitalWrite(L13,1);
       
        if ((digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////

        digitalWrite(L1, 1);  digitalWrite(L2, 0); digitalWrite(L4, 1);  digitalWrite(L5,0);
        digitalWrite(L9, 1); digitalWrite(L10, 0); digitalWrite(L12,1); digitalWrite(L13,0);
       
        if ((digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;
        //////////////////////////////////////////////////////

         digitalWrite(L1,1);  digitalWrite(L2, 0); digitalWrite(L4, 1);  digitalWrite(L5,1);
        digitalWrite(L9, 1); digitalWrite(L10, 0); digitalWrite(L12,1); digitalWrite(L13,1);
       
        if ((digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;

        ///////////////////////////////////////////////////
        digitalWrite(L1, 1);  digitalWrite(L2, 1); digitalWrite(L4, 0);  digitalWrite(L5, 0);
        digitalWrite(L9, 1); digitalWrite(L10, 1); digitalWrite(L12, 0); digitalWrite(L13,0);
       
        if ((digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;

        ///////////////////////////////////////////////////
        digitalWrite(L1, 1);  digitalWrite(L2, 1); digitalWrite(L4, 0);  digitalWrite(L5, 1);
        digitalWrite(L9, 1); digitalWrite(L10, 1); digitalWrite(L12, 0); digitalWrite(L13,1);
       
        if ((digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;

        //////////////////////////////////////////////////////
        digitalWrite(L1, 1);  digitalWrite(L2, 1); digitalWrite(L4, 1);  digitalWrite(L5,0);
        digitalWrite(L9, 1); digitalWrite(L10, 1); digitalWrite(L12,1); digitalWrite(L13,0);
       
        if ((digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;

        ///////////////////////////////////////////////////

        digitalWrite(L1, 1);  digitalWrite(L2, 1); digitalWrite(L4, 1);  digitalWrite(L5,1);
        digitalWrite(L9, 1); digitalWrite(L10, 1); digitalWrite(L12,1); digitalWrite(L13,1);
       
        if ((digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;

        Serial.println(check);
        Serial.println(ic_code);
    }

 ///////////////////////////////////////////////////

// Thaki gyo chu

// 4 ip AND

else if (ic_code == 7421) {
        bool check = true;

        digitalWrite(L1, 0);  digitalWrite(L2, 0); digitalWrite(L4,  0);  digitalWrite(L5,0);
        digitalWrite(L9, 0); digitalWrite(L10, 0); digitalWrite(L12, 0); digitalWrite(L13,0);
       
        if ((digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////

        digitalWrite(L1, 0);  digitalWrite(L2, 0); digitalWrite(L4,  0);  digitalWrite(L5,1);
        digitalWrite(L9, 0); digitalWrite(L10, 0); digitalWrite(L12, 0); digitalWrite(L13,1);
       
        if ((digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////

        digitalWrite(L1, 0);  digitalWrite(L2, 0); digitalWrite(L4, 1);  digitalWrite(L5,0);
        digitalWrite(L9, 0); digitalWrite(L10, 0); digitalWrite(L12,1); digitalWrite(L13,0);
       
        if ((digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        //////////////////////////////////////////////////////

         digitalWrite(L1, 0);  digitalWrite(L2,0); digitalWrite(L4, 1);  digitalWrite(L5,1);
        digitalWrite(L9, 0); digitalWrite(L10, 0); digitalWrite(L12,1); digitalWrite(L13,1);
       
        if ((digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;

        ///////////////////////////////////////////////////
        digitalWrite(L1, 0);  digitalWrite(L2, 1); digitalWrite(L4, 0);  digitalWrite(L5,0);
        digitalWrite(L9, 0); digitalWrite(L10, 1); digitalWrite(L12,0); digitalWrite(L13,0);
       
        if ((digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;

        ///////////////////////////////////////////////////
        digitalWrite(L1, 0);  digitalWrite(L2, 1); digitalWrite(L4, 0);  digitalWrite(L5,1);
        digitalWrite(L9, 0); digitalWrite(L10, 1); digitalWrite(L12,0); digitalWrite(L13,1);
       
        if ((digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;

        //////////////////////////////////////////////////////
        digitalWrite(L1, 0);  digitalWrite(L2, 1); digitalWrite(L4, 1);  digitalWrite(L5,0);
        digitalWrite(L9, 0); digitalWrite(L10, 1); digitalWrite(L12,1); digitalWrite(L13,0);
       
        if ((digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;

        ///////////////////////////////////////////////////

        digitalWrite(L1, 0);  digitalWrite(L2, 1); digitalWrite(L4, 1);  digitalWrite(L5,1);
        digitalWrite(L9, 0); digitalWrite(L10, 1); digitalWrite(L12,1); digitalWrite(L13,1);
       
        if ((digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
//////////////////////////

        digitalWrite(L1, 1);  digitalWrite(L2, 0); digitalWrite(L4,  0);  digitalWrite(L5,0);
        digitalWrite(L9, 1); digitalWrite(L10, 0); digitalWrite(L12, 0); digitalWrite(L13,0);
       
        if ((digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////

        digitalWrite(L1, 1);  digitalWrite(L2, 0); digitalWrite(L4, 0);  digitalWrite(L5,1);
        digitalWrite(L9, 1); digitalWrite(L10, 0); digitalWrite(L12,0); digitalWrite(L13,1);
       
        if ((digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////

        digitalWrite(L1, 1);  digitalWrite(L2, 0); digitalWrite(L4, 1);  digitalWrite(L5,0);
        digitalWrite(L9, 1); digitalWrite(L10, 0); digitalWrite(L12,1); digitalWrite(L13,0);
       
        if ((digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        //////////////////////////////////////////////////////

         digitalWrite(L1,1);  digitalWrite(L2, 0); digitalWrite(L4, 1);  digitalWrite(L5,1);
        digitalWrite(L9, 1); digitalWrite(L10, 0); digitalWrite(L12,1); digitalWrite(L13,1);
       
        if ((digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;

        ///////////////////////////////////////////////////
        digitalWrite(L1, 1);  digitalWrite(L2, 1); digitalWrite(L4, 0);  digitalWrite(L5, 0);
        digitalWrite(L9, 1); digitalWrite(L10, 1); digitalWrite(L12, 0); digitalWrite(L13,0);
       
        if ((digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;

        ///////////////////////////////////////////////////
        digitalWrite(L1, 1);  digitalWrite(L2, 1); digitalWrite(L4, 0);  digitalWrite(L5, 1);
        digitalWrite(L9, 1); digitalWrite(L10, 1); digitalWrite(L12, 0); digitalWrite(L13,1);
       
        if ((digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;

        //////////////////////////////////////////////////////
        digitalWrite(L1, 1);  digitalWrite(L2, 1); digitalWrite(L4, 1);  digitalWrite(L5,0);
        digitalWrite(L9, 1); digitalWrite(L10, 1); digitalWrite(L12,1); digitalWrite(L13,0);
       
        if ((digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;

        ///////////////////////////////////////////////////

        digitalWrite(L1, 1);  digitalWrite(L2, 1); digitalWrite(L4, 1);  digitalWrite(L5,1);
        digitalWrite(L9, 1); digitalWrite(L10, 1); digitalWrite(L12,1); digitalWrite(L13,1);
       
        if ((digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;

        Serial.println(check);
        Serial.println(ic_code);
    }

    //////////////////>>>>>>>>>>>><<<<<<<<<<>>>>>>>>>>>>>......./////////////

else if (ic_code == 7427)
    {
        bool check = true;
        digitalWrite(L1, 0);  digitalWrite(L2, 0); digitalWrite(L13, 0);
        digitalWrite(L4, 0);  digitalWrite(L5, 0); digitalWrite(L3,  0);
        digitalWrite(L9, 0); digitalWrite(L10, 0); digitalWrite(L11, 0);
       
        if ((digitalRead(L12) == 1) && (digitalRead(L6) == 1) && (digitalRead(L8) == 1))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////
        digitalWrite(L1, 0);  digitalWrite(L2, 0); digitalWrite(L13, 1);
        digitalWrite(L4, 0);  digitalWrite(L5, 0); digitalWrite(L3,  1);
        digitalWrite(L9, 0); digitalWrite(L10, 0); digitalWrite(L11, 1);
       
        if ((digitalRead(L12) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        /////
        digitalWrite(L1, 0);  digitalWrite(L2, 1); digitalWrite(L13, 0);
        digitalWrite(L4, 0);  digitalWrite(L5, 1); digitalWrite(L3,  0);
        digitalWrite(L9, 0); digitalWrite(L10, 1); digitalWrite(L11, 0);
       
        if ((digitalRead(L12) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        ////
        digitalWrite(L1, 0);  digitalWrite(L2, 1); digitalWrite(L13, 1);
        digitalWrite(L4, 0);  digitalWrite(L5, 1); digitalWrite(L3,  1);
        digitalWrite(L9, 0); digitalWrite(L10, 1); digitalWrite(L11, 1);
       
        if ((digitalRead(L12) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////
        digitalWrite(L1, 1);  digitalWrite(L2, 0); digitalWrite(L13, 0);
        digitalWrite(L4, 1);  digitalWrite(L5, 0); digitalWrite(L3,  0);
        digitalWrite(L9, 1); digitalWrite(L10, 0); digitalWrite(L11, 0);
       
        if ((digitalRead(L12) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        /////
        digitalWrite(L1, 1);  digitalWrite(L2, 0); digitalWrite(L13, 1);
        digitalWrite(L4, 1);  digitalWrite(L5, 0); digitalWrite(L3,  1);
        digitalWrite(L9, 1); digitalWrite(L10, 0); digitalWrite(L11, 1);
       
        if ((digitalRead(L12) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        ////
         digitalWrite(L1,1);  digitalWrite(L2, 1); digitalWrite(L13, 0);
        digitalWrite(L4, 1);  digitalWrite(L5, 1); digitalWrite(L3,  0);
        digitalWrite(L9, 1); digitalWrite(L10, 1); digitalWrite(L11, 0);
       
        if ((digitalRead(L12) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;
        /////
         digitalWrite(L1,1);  digitalWrite(L2, 1); digitalWrite(L13, 1);
        digitalWrite(L4, 1);  digitalWrite(L5, 1); digitalWrite(L3,  1);
        digitalWrite(L9, 1); digitalWrite(L10, 1); digitalWrite(L11, 1);
       
        if ((digitalRead(L12) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0))
            check = check;
        else
            check = false;

        Serial.println(check);
        Serial.println(ic_code);
    }
///////////////////// .,;;',;.;...............'?/////??????????????/////////////



else if (ic_code == 7432) {

        bool check = true;
        digitalWrite(L1, 0); digitalWrite(L2, 0);
        digitalWrite(L4, 0); digitalWrite(L5, 0);
        digitalWrite(L9, 0); digitalWrite(L10, 0);
        digitalWrite(L12, 0); digitalWrite(L13, 0);
         if ((digitalRead(L3) == 0) && (digitalRead(L6) == 0) && (digitalRead(L8) == 0) && (digitalRead(L11) == 0))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////////
        digitalWrite(L1, 0); digitalWrite(L2, 1);
        digitalWrite(L4, 0); digitalWrite(L5, 1);
        digitalWrite(L9, 0); digitalWrite(L10, 1);
        digitalWrite(L12, 0); digitalWrite(L13, 1);
 if ((digitalRead(L3) == 1) && (digitalRead(L6) == 1) && (digitalRead(L8) == 1) && (digitalRead(L11) == 1))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////
        digitalWrite(L1, 1); digitalWrite(L2, 0);
        digitalWrite(L4, 1); digitalWrite(L5, 0);
        digitalWrite(L9, 1); digitalWrite(L10, 0);
        digitalWrite(L12, 1); digitalWrite(L13, 0);
         if ((digitalRead(L3) == 1) && (digitalRead(L6) == 1) && (digitalRead(L8) == 1) && (digitalRead(L11) == 1))
            check = check;
        else
            check = false;
        ///////////////////////////////////////////////
        digitalWrite(L1, 1); digitalWrite(L2, 1);
        digitalWrite(L4, 1); digitalWrite(L5, 1);
        digitalWrite(L9, 1); digitalWrite(L10, 1);
        digitalWrite(L12, 1); digitalWrite(L13, 1);
        if ((digitalRead(L3) == 1) && (digitalRead(L6) == 1) && (digitalRead(L8) == 1) && (digitalRead(L11) == 1))
            check = check;
        else
            check = false;

        Serial.println(check);
        Serial.println(ic_code);
    }

///////////////////// .,;;',;.;...............'?/////??????????????/////////////


// 7430 nand nai lakhyo bau vadhar che

    
