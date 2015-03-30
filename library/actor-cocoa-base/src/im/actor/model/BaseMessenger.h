//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/library/actor-cocoa-base/build/java/im/actor/model/BaseMessenger.java
//

#ifndef _AMBaseMessenger_H_
#define _AMBaseMessenger_H_

@class AMBindedDisplayList;
@class AMConfiguration;
@class AMConversationVM;
@class AMPeer;
@class ImActorModelModulesDisplayLists;
@protocol AMConversationVMCallback;

#include "J2ObjC_header.h"
#include "im/actor/model/Messenger.h"

@interface AMBaseMessenger : AMMessenger {
}

- (instancetype)initWithAMConfiguration:(AMConfiguration *)configuration;

- (AMConversationVM *)buildConversationVMWithAMPeer:(AMPeer *)peer
                       withAMConversationVMCallback:(id<AMConversationVMCallback>)callback;

- (AMBindedDisplayList *)getDialogsGlobalList;

- (AMBindedDisplayList *)getMessagesGlobalListWithAMPeer:(AMPeer *)peer;

- (AMBindedDisplayList *)getContactsGlobalList;

- (AMBindedDisplayList *)buildContactDisplayList;

@end

J2OBJC_EMPTY_STATIC_INIT(AMBaseMessenger)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

typedef AMBaseMessenger ImActorModelBaseMessenger;

J2OBJC_TYPE_LITERAL_HEADER(AMBaseMessenger)

#endif // _AMBaseMessenger_H_
