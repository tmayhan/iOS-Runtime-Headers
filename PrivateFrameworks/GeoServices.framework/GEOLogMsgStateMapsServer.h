/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateMapsServer : PBCodable <NSCopying> {
    GEOMapsServerMetadata * _serverMetadata;
}

@property (nonatomic, readonly) BOOL hasServerMetadata;
@property (nonatomic, retain) GEOMapsServerMetadata *serverMetadata;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasServerMetadata;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)serverMetadata;
- (void)setServerMetadata:(id)arg1;
- (void)writeTo:(id)arg1;

@end
