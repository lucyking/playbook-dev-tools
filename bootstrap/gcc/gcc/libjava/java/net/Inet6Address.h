
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_Inet6Address__
#define __java_net_Inet6Address__

#pragma interface

#include <java/net/InetAddress.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
        class Inet6Address;
        class NetworkInterface;
    }
  }
}

class java::net::Inet6Address : public ::java::net::InetAddress
{

public: // actually package-private
  Inet6Address(JArray< jbyte > *, ::java::lang::String *);
public:
  jboolean isMulticastAddress();
  jboolean isAnyLocalAddress();
  jboolean isLoopbackAddress();
  jboolean isLinkLocalAddress();
  jboolean isSiteLocalAddress();
  jboolean isMCGlobal();
  jboolean isMCNodeLocal();
  jboolean isMCLinkLocal();
  jboolean isMCSiteLocal();
  jboolean isMCOrgLocal();
  JArray< jbyte > * getAddress();
  static ::java::net::Inet6Address * getByAddress(::java::lang::String *, JArray< jbyte > *, jint);
  static ::java::net::Inet6Address * getByAddress(::java::lang::String *, JArray< jbyte > *, ::java::net::NetworkInterface *);
  ::java::net::NetworkInterface * getScopedInterface();
  jint getScopeId();
  ::java::lang::String * getHostAddress();
  jint hashCode();
  jboolean equals(::java::lang::Object *);
  jboolean isIPv4CompatibleAddress();
private:
  void readObject(::java::io::ObjectInputStream *);
  void writeObject(::java::io::ObjectOutputStream *);
public: // actually package-private
  static const jlong serialVersionUID = 6880410070516793377LL;
  JArray< jbyte > * __attribute__((aligned(__alignof__( ::java::net::InetAddress)))) ipaddress;
private:
  jint scope_id;
  jboolean scope_id_set;
  jboolean scope_ifname_set;
  ::java::lang::String * ifname;
  ::java::net::NetworkInterface * nif;
  static const jint AF_INET6 = 10;
public:
  static ::java::lang::Class class$;
};

#endif // __java_net_Inet6Address__
