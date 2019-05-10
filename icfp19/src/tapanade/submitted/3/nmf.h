// name of top routine:
// nmfMain
// dependent output variables:
// 
// independent variables:
// u

double nmfMain(int m, int n, double* u, double* v, double** AA) {
  double x21122 = 0;
  for (int idx = 0; idx < n; idx++) {
    double acc = x21122;
    double x21121 = 0;
    for (int idx0 = 0; idx0 < m; idx0++) {
      double acc0 = x21121;
      acc0 = (acc0) + ((log(((v[idx])) * ((u[idx0])))) + ((((AA[idx])[idx0])) / (((v[idx])) * ((u[idx0])))));
      x21121 = acc0;
    }
    
    acc = (acc) + (x21121);
    x21122 = acc;
  }
  return x21122;
}

double nmfMain_poisson(int m, int n, double* u, double* v, double** AA) {
  double x23990 = 0;
  for (int idx = 0; idx < n; idx++) {
    double acc = x23990;
    double x23989 = 0;
    for (int idx0 = 0; idx0 < m; idx0++) {
      double acc0 = x23989;
      acc0 = (acc0) + ((((v[idx])) * ((u[idx0]))) - ((((AA[idx])[idx0])) * (log(((v[idx])) * ((u[idx0]))))));
      x23989 = acc0;
    }
    
    acc = (acc) + (x23989);
    x23990 = acc;
  }
  
  return x23990;
}
