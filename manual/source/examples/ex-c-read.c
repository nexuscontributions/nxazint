 NXopen ('NXfile.nxs', NXACC_READ, &fileID);
   NXopengroup (fileID, "Scan", "NXentry");
     NXopengroup (fileID, "data", "NXdata");
       NXopendata (fileID, "two_theta");
         NXgetinfo (fileID, &rank, dims, &datatype);
         NXmalloc ((void **) &tth, rank, dims, datatype);
         NXgetdata (fileID, tth);
       NXclosedata (fileID);
     NXclosegroup (fileID);
   NXclosegroup (fileID);
 NXclose (fileID);