#pragma once

#include "script_interface_playlist.h"
#include "com_tools.h"

class FbPlaylistMangerService
{
public:
    // Methods
    static STDMETHODIMP GetPlaylistItems(UINT playlistIndex, IFbMetadbHandleList ** outItems);
    static STDMETHODIMP SetPlaylistSelectionSingle(UINT playlistIndex, UINT itemIndex, VARIANT_BOOL state);
    static STDMETHODIMP SetPlaylistSelection(UINT playlistIndex, VARIANT affectedItems, VARIANT_BOOL state);
    static STDMETHODIMP ClearPlaylistSelection(UINT playlistIndex);
    static STDMETHODIMP GetPlaylistFocusItemHandle(VARIANT_BOOL force, IFbMetadbHandle ** outItem);
    static STDMETHODIMP SetPlaylistFocusItem(UINT playlistIndex, UINT itemIndex);
    static STDMETHODIMP SetPlaylistFocusItemByHandle(UINT playlistIndex, IFbMetadbHandle * item);

    // Properties
    static STDMETHODIMP get_PlaybackOrder(UINT * outOrder);
    static STDMETHODIMP put_PlaybackOrder(UINT order);
    static STDMETHODIMP get_ActivePlaylist(UINT * outPlaylistIndex);
    static STDMETHODIMP put_ActivePlaylist(UINT playlistIndex);
    static STDMETHODIMP get_PlayingPlaylist(UINT * outPlaylistIndex);
    static STDMETHODIMP put_PlayingPlaylist(UINT playlistIndex);
    static STDMETHODIMP get_PlaylistCount(UINT * outCount);
    static STDMETHODIMP get_PlaylistItemCount(UINT playlistIndex, UINT * outCount);
};

// NOTE: Do not use com_object_impl_t<> to initialize, use com_object_singleton_t<> instead.
class FbPlaylistManager : public IDispatchImpl3<IFbPlaylistManager>
{
public:
    // Methods
    STDMETHODIMP GetPlaylistItems(UINT playlistIndex, IFbMetadbHandleList ** outItems);
    STDMETHODIMP SetPlaylistSelectionSingle(UINT playlistIndex, UINT itemIndex, VARIANT_BOOL state);
    STDMETHODIMP SetPlaylistSelection(UINT playlistIndex, VARIANT affectedItems, VARIANT_BOOL state);
    STDMETHODIMP ClearPlaylistSelection(UINT playlistIndex);
    STDMETHODIMP GetPlaylistFocusItemHandle(VARIANT_BOOL force, IFbMetadbHandle ** outItem);
    STDMETHODIMP SetPlaylistFocusItem(UINT playlistIndex, UINT itemIndex);
    STDMETHODIMP SetPlaylistFocusItemByHandle(UINT playlistIndex, IFbMetadbHandle * item);

    // Properties
    STDMETHODIMP get_PlaybackOrder(UINT * outOrder);
    STDMETHODIMP put_PlaybackOrder(UINT order);
    STDMETHODIMP get_ActivePlaylist(UINT * outPlaylistIndex);
    STDMETHODIMP put_ActivePlaylist(UINT playlistIndex);
    STDMETHODIMP get_PlayingPlaylist(UINT * outPlaylistIndex);
    STDMETHODIMP put_PlayingPlaylist(UINT playlistIndex);
    STDMETHODIMP get_PlaylistCount(UINT * outCount);
    STDMETHODIMP get_PlaylistItemCount(UINT playlistIndex, UINT * outCount);
};
