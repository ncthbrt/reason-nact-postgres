[@bs.module "nact-persistence-postgres"] [@bs.new]
external create : string => Nact.persistenceEngine =
  "PostgresPersistenceEngine";