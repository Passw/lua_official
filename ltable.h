/*
** $Id: ltable.h,v 1.1 1997/09/16 19:25:59 roberto Exp roberto $
** Lua tables (hash)
** See Copyright Notice in lua.h
*/

#ifndef ltable_h
#define ltable_h

#include "lobject.h"


extern GCnode luaH_root;


#define node(t,i)       (&(t)->node[i])
#define ref(n)		(&(n)->ref)
#define nhash(t)	((t)->nhash)

Hash *luaH_new (int nhash);
void luaH_callIM (Hash *l);
void luaH_free (Hash *frees);
TObject *luaH_get (Hash *t, TObject *ref);
TObject *luaH_set (Hash *t, TObject *ref);
Node *luaH_next (TObject *o, TObject *r);

#endif
