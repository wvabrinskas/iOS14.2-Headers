/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsSearchListSource.h>

@interface CFPrefsSuiteSearchListSource : CFPrefsSearchListSource
-(void)deferredNotifyCausedByLocalWriteOfChangesToKey:(CFStringRef)arg1 fromValue:(void*)arg2 toValue:(void*)arg3 ;
-(void)handleChangeNotificationForDomainIdentifier:(CFStringRef)arg1 isRemote:(BOOL)arg2 ;
-(void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(CFDictionaryRef)arg1 toDictionary:(CFDictionaryRef)arg2 ;
-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2 ;
@end
