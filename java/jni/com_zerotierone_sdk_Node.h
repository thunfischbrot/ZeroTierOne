/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_zerotier_sdk_Node */

#ifndef _Included_com_zerotierone_sdk_Node
#define _Included_com_zerotierone_sdk_Node
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_zerotier_sdk_Node
 * Method:    node_init
 * Signature: (J)Lcom/zerotier/sdk/ResultCode;
 */
JNIEXPORT jobject JNICALL Java_com_zerotier_sdk_Node_node_1init
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_zerotier_sdk_Node
 * Method:    node_delete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_zerotier_sdk_Node_node_1delete
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_zerotier_sdk_Node
 * Method:    processVirtualNetworkFrame
 * Signature: (JJJJJII[B[J)Lcom/zerotier/sdk/ResultCode;
 */
JNIEXPORT jobject JNICALL Java_com_zerotier_sdk_Node_processVirtualNetworkFrame
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jlong, jint, jint, jbyteArray, jlongArray);

/*
 * Class:     com_zerotier_sdk_Node
 * Method:    processWirePacket
 * Signature: (JJLjava/net/InetSockAddress;[B[J)Lcom/zerotier/sdk/ResultCode;
 */
JNIEXPORT jobject JNICALL Java_com_zerotier_sdk_Node_processWirePacket
  (JNIEnv *, jobject, jlong, jlong, jobject, jbyteArray, jlongArray);

/*
 * Class:     com_zerotier_sdk_Node
 * Method:    processBackgroundTasks
 * Signature: (JJ[J)Lcom/zerotier/sdk/ResultCode;
 */
JNIEXPORT jobject JNICALL Java_com_zerotier_sdk_Node_processBackgroundTasks
  (JNIEnv *, jobject, jlong, jlong, jlongArray);

/*
 * Class:     com_zerotier_sdk_Node
 * Method:    join
 * Signature: (JJ)Lcom/zerotier/sdk/ResultCode;
 */
JNIEXPORT jobject JNICALL Java_com_zerotier_sdk_Node_join
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_zerotier_sdk_Node
 * Method:    leave
 * Signature: (JJ)Lcom/zerotier/sdk/ResultCode;
 */
JNIEXPORT jobject JNICALL Java_com_zerotier_sdk_Node_leave
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_zerotier_sdk_Node
 * Method:    multicastSubscribe
 * Signature: (JJJJ)Lcom/zerotier/sdk/ResultCode;
 */
JNIEXPORT jobject JNICALL Java_com_zerotier_sdk_Node_multicastSubscribe
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     com_zerotier_sdk_Node
 * Method:    multicastUnsubscribe
 * Signature: (JJJJ)Lcom/zerotier/sdk/ResultCode;
 */
JNIEXPORT jobject JNICALL Java_com_zerotier_sdk_Node_multicastUnsubscribe
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     com_zerotier_sdk_Node
 * Method:    address
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_zerotier_sdk_Node_address
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_zerotier_sdk_Node
 * Method:    status
 * Signature: (J)Lcom/zerotier/sdk/NodeStatus;
 */
JNIEXPORT jobject JNICALL Java_com_zerotier_sdk_Node_status
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_zerotier_sdk_Node
 * Method:    networkConfig
 * Signature: (JJ)Lcom/zerotier/sdk/VirtualNetworkConfig;
 */
JNIEXPORT jobject JNICALL Java_com_zerotier_sdk_Node_networkConfig
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_zerotier_sdk_Node
 * Method:    version
 * Signature: ()Lcom/zerotier/sdk/Version;
 */
JNIEXPORT jobject JNICALL Java_com_zerotier_sdk_Node_version
  (JNIEnv *, jobject);

/*
 * Class:     com_zerotier_sdk_Node
 * Method:    peers
 * Signature: (J)[Lcom/zerotier/sdk/Peer;
 */
JNIEXPORT jobjectArray JNICALL Java_com_zerotier_sdk_Node_peers
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_zerotier_sdk_Node
 * Method:    networks
 * Signature: (J)[Lcom/zerotier/sdk/VirtualNetworkConfig;
 */
JNIEXPORT jobjectArray JNICALL Java_com_zerotier_sdk_Node_networks
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
