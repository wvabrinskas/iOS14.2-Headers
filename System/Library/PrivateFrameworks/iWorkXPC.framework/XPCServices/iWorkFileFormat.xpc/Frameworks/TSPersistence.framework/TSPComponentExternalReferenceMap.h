/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSPComponentExternalReferenceMap : NSObject <NSCopying> {

	unordered_map<const long long, TSP::ComponentExternalReferenceInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ComponentExternalReferenceInfo> > >* _map;

}
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)saveToMessage:(ComponentInfo*)arg1 ;
-(id)initFromMessage:(const ComponentInfo*)arg1 ;
-(ComponentExternalReferenceInfo)externalReferenceInfoForObjectIdentifier:(long long)arg1 ;
-(void)enumerateExternalReferences:(/*^block*/id)arg1 ;
-(void)addExternalReferenceToObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(BOOL)arg3 componentIsVersioned:(BOOL)arg4 ;
-(id)initWithMapSize:(unsigned long long)arg1 ;
-(void)appendReferencesFromMessage:(const RepeatedPtrField<TSP::ComponentExternalReference>*)arg1 componentIsVersioned:(BOOL)arg2 ;
-(id)initWithComponentExternalReferenceMap:(id)arg1 ;
@end
